// Fill out your copyright notice in the Description page of Project Settings.


#include "MobBase2D.h"

// Mob goes to the next tile of trajectory or does nothing in case if the trajectory is empty
void AMobBase2D::moveToNextTile()
{
	if (CurrentTrajectory.IsEmpty()) {
		if (GetWorldTimerManager().IsTimerActive(ApproachTimerHandle)) {
			GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
		}
		bIsMoving = false;
		DoAction();
		return;
	}

	CurrentTile = NextTile;
	NextTile = *(CurrentTrajectory.begin());
	Direction = NextTile - CurrentTile;
	percentOfPassedDistance = 0.0f;
	CurrentTrajectory.RemoveAt(0);
	
	GEngine->AddOnScreenDebugMessage(-1, 1000.f, FColor::Green, CurrentTile.ToString());

	GetWorldTimerManager().SetTimer(
		ApproachTimerHandle,
		this,
		&AMobBase2D::goCloserToNextTile,
		SecsForNextTile / MovementSpeed / MotionFrameAmount * FVector::Distance(NextTile, CurrentTile) / TileSize,
		true,
		0
	);
}

void AMobBase2D::goCloserToNextTile()
{
	percentOfPassedDistance += 1.0f / MotionFrameAmount;

	FVector newLocation = CurrentTile * (1 - percentOfPassedDistance) + NextTile * percentOfPassedDistance;
	SetActorLocation(newLocation);

	GEngine->AddOnScreenDebugMessage(-1, 1000.f, FColor::Red, newLocation.ToString());

	if (std::abs(percentOfPassedDistance - 1) < 0.01) {
		GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
		moveToNextTile();
	}
}

// Sets default values
AMobBase2D::AMobBase2D()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

bool AMobBase2D::HasAction() const
{
	return bHasTask;
}

// Sets the trajectory for the mob movement, if there is no way mob messeges GameMode
void AMobBase2D::SetTrajectory(TArray<FVector> NewTrajectory)
{
	CurrentTrajectory = NewTrajectory;

	if (bIsMoving) {
		StopMovement();
		FollowTrajectory();
	}
}

// Makes the mob follow the set trajectory
void AMobBase2D::FollowTrajectory()
{
	if (CurrentTrajectory.IsEmpty()) {
		DoAction();
		return;
	}

	if (CurrentTrajectory == G_NO_WAY) {
		reportImpossibleTask();
		bHasTask = false;
		return;
	}

	bIsMoving = true;

	GEngine->AddOnScreenDebugMessage(-1, 1000.f, FColor::Red, FString("GO"));

	moveToNextTile();
}

void AMobBase2D::StopMovement()
{
	bIsMoving = false;

	if (GetWorldTimerManager().IsTimerActive(ApproachTimerHandle)) {
		GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
	}
}

FVector AMobBase2D::GetDirection()
{
	if (!bIsMoving) {
		return FVector(0, 0, 0);
	}

	return Direction;
}

FVector AMobBase2D::GetCurrentTile()
{
	return CurrentTile;
}

void AMobBase2D::SetStartPos(FVector StartPos)
{
	NextTile = StartPos;
	CurrentTile = StartPos;
	SetActorLocation(StartPos);
}

bool AMobBase2D::SetTileSize(float newTileSize)
{
	if (newTileSize > 0) {
		TileSize = newTileSize;
		return true;
	}
	return false;
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

