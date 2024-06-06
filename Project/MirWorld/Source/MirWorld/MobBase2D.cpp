// Fill out your copyright notice in the Description page of Project Settings.

#include "MobBase2D.h"


// Sets default values
AMobBase2D::AMobBase2D()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMobBase2D::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMobBase2D::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMobBase2D::GoCloserToNextTile() //TODO
{
	PercentOfPassedDistance += 1.0f / MotionFrameAmount;

	FVector newLocation = CurrentTile * (1 - PercentOfPassedDistance) + NextTile * PercentOfPassedDistance;
	SetActorLocation(newLocation);

	if (std::abs(PercentOfPassedDistance - 1) < 0.01) {
		GetWorldTimerManager().ClearTimer(ApproachTimerHandle);

		// change passability of tiles
		auto Actor = UGameplayStatics::GetActorOfClass(GetWorld(), AGenerator::StaticClass());
		auto Map = reinterpret_cast<AGenerator*>(Actor);

		if (!Map->GetTileIsPassable(NextTile) && !bIsGoingBack) {
			return GoBack();
		}

		SetActorLocation(NextTile);
		CurrentTile = NextTile;

		// if desired position was blocked so char has come back
		if (bIsGoingBack) {
			bIsGoingBack = false;
			bHasTask = false;
			Path = GetPathFromMob(Destination); 
			if (Path == G_NO_WAY) {
				bIsMoving = false;
				Map->SetTileIsPassable(CurrentTile, false);
				ReportImpossibleTask();
				return;
			}
		}
		
		GoTo(Destination);
	}
}

void AMobBase2D::GoTo(FVector NewDestination)
{
	Destination = NewDestination;
	Path = GetPathFromMob(NewDestination); 

	if (Path.IsEmpty() || 
		abs(abs(GetActorLocation().Z - NewDestination.Z) -
			FVector::Distance(GetActorLocation(), NewDestination)) < 1) 
	{
		bIsMoving = false;
		auto Actor = UGameplayStatics::GetActorOfClass(GetWorld(), AGenerator::StaticClass());
		reinterpret_cast<AGenerator*>(Actor)->SetTileIsPassable(CurrentTile, false);
		DoAction();
		return;
	}

	if (Path == G_NO_WAY) {
		bHasTask = false;
		bIsMoving = false;
		auto Actor = UGameplayStatics::GetActorOfClass(GetWorld(), AGenerator::StaticClass());
		reinterpret_cast<AGenerator*>(Actor)->SetTileIsPassable(CurrentTile, false);
		ReportImpossibleTask();
		return;
	}

	if (!bIsMoving) {
		auto Actor = UGameplayStatics::GetActorOfClass(GetWorld(), AGenerator::StaticClass());
		reinterpret_cast<AGenerator*>(Actor)->SetTileIsPassable(CurrentTile, true);
	}
	bIsMoving = true;

	NextTile = *(Path.begin());
	Path.RemoveAt(0);
	Direction = NextTile - CurrentTile;
	PercentOfPassedDistance = 0.0f;

	GetWorldTimerManager().SetTimer(
		ApproachTimerHandle,
		this,
		&AMobBase2D::GoCloserToNextTile,
		SecsForNextTile / MovementSpeed / MotionFrameAmount * FVector::Distance(NextTile, CurrentTile) / TileSize,
		true,
		0
	);
}

void AMobBase2D::GoBack()
{
	auto Actor = UGameplayStatics::GetActorOfClass(GetWorld(), AGenerator::StaticClass());
	auto Map = reinterpret_cast<AGenerator*>(Actor);

	std::swap(CurrentTile, NextTile);
	bIsMoving = true;
	PercentOfPassedDistance = INSTANT_REBOUND_COEFF; //FVector::Distance(GetActorLocation(), NextTile) / FVector::Distance(CurrentTile, NextTile);
	GetWorldTimerManager().SetTimer(
		ApproachTimerHandle,
		this,
		&AMobBase2D::GoCloserToNextTile,
		SecsForNextTile / MovementSpeed / MotionFrameAmount * FVector::Distance(NextTile, CurrentTile) / TileSize,
		true,
		0
	);

	bIsGoingBack = true;
	Direction = NextTile - CurrentTile;

	/*if (Map->GetTileIsPassable(CurrentTile)) { // can return to the previous tile
		TODO
	}
	else {
		TODO
	}*/
}

void AMobBase2D::StopAll() // CHANGE IMPLEMENTATION
{
	bIsMoving = false;

	if (GetWorldTimerManager().IsTimerActive(ApproachTimerHandle)) {
		GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
	}
}

TArray<FVector> AMobBase2D::GetPathFromMob(FVector Aim)
{
	TArray<AActor*> FoundActors = { nullptr };
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGenerator::StaticClass(), FoundActors);
	auto Map = reinterpret_cast<AGenerator*>(FoundActors[0]);
	TArray<FVector> Trajectory = G_NO_WAY;
	if (Map) {
		Trajectory = Map->GetTrajectory(CurrentTile, Aim, AimRadius);
	}
	return Trajectory;
}

FVector AMobBase2D::GetDirection()
{
	if (!bIsMoving) {
		return FVector(0, 0, 0);
	}

	return Direction;
}

void AMobBase2D::SetStartPos(FVector StartPos)
{
	NextTile = StartPos;
	CurrentTile = StartPos;
	auto Actor = UGameplayStatics::GetActorOfClass(GetWorld(), AGenerator::StaticClass());
	auto Map = reinterpret_cast<AGenerator*>(Actor);
	Map->SetTileIsPassable(CurrentTile, false);
	SetActorLocation(StartPos);
}


bool AMobBase2D::HasAction() const
{
	return bHasTask;
}


bool AMobBase2D::SetTileSize(float newTileSize)
{
	if (newTileSize > 0) {
		TileSize = newTileSize;
		return true;
	}
	return false;
}
