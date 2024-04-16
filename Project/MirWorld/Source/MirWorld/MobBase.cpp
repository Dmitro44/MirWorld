// Fill out your copyright notice in the Description page of Project Settings.


#include "MobBase.h"

// Mob goes to the next tile of trajectory or does nothing in case if the trajectory is empty
void AMobBase::moveToNextTile()
{
	if (CurrentTrajectory.IsEmpty()) {
		if (GetWorldTimerManager().IsTimerActive(ApproachTimerHandle)) {
			GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
		}
		IsMoving = false;
		DoAction();
		return;
	}

	CurrentTile = NextTile;
	NextTile = *(CurrentTrajectory.begin());
	percentOfPassedDistance = 0.0f;
	CurrentTrajectory.RemoveAt(0);

	GetWorldTimerManager().SetTimer(
		ApproachTimerHandle,
		this,
		&AMobBase::goCloserToNextTile,
		SecsForNextTile / MovementSpeed / MotionFrameAmount * FVector::Distance(NextTile, CurrentTile) / TileSize,
		true,
		0
	);
}

void AMobBase::goCloserToNextTile()
{
	percentOfPassedDistance += 1.0f / MotionFrameAmount;

	FVector newLocation = CurrentTile * (1 - percentOfPassedDistance) + NextTile * percentOfPassedDistance;
	SetActorLocation(newLocation);

	if (std::abs(percentOfPassedDistance - 1) < 0.01) {
		GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
		moveToNextTile();
	}
}

// Sets default values
AMobBase::AMobBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

bool AMobBase::HasAction() const
{
	return HasTask;
}

// Sets the trajectory for the mob movement, if there is no way mob messeges GameMode
void AMobBase::SetTrajectory(TArray<FVector> newTrajectory)
{
	CurrentTrajectory = newTrajectory;

	if (IsMoving) {
		StopMovement();
		FollowTrajectory();
	}
}

// Makes the mob follow the set trajectory
void AMobBase::FollowTrajectory()
{
	if (CurrentTrajectory.IsEmpty()) {
		DoAction();
		return;
	}

	if (CurrentTrajectory == NO_WAY) {
		reportImpossibleTask();
		HasTask = false;
		return;
	}

	IsMoving = true;
	moveToNextTile();
}

void AMobBase::StopMovement()
{
	IsMoving = false;

	if (GetWorldTimerManager().IsTimerActive(ApproachTimerHandle)) {
		GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
	}
}

void AMobBase::SetStartPos(FVector StartPos)
{	
	NextTile = StartPos;
	SetActorLocation(StartPos);
}

bool AMobBase::SetTileSize(float newTileSize)
{
	if (newTileSize > 0) {
		TileSize = newTileSize;
		return true;
	}
	return false;
}

// Called when the game starts or when spawned
void AMobBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMobBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

