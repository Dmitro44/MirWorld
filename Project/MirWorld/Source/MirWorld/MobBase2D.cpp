// Fill out your copyright notice in the Description page of Project Settings.


#include "MobBase2D.h"

// Mob goes to the next tile of trajectory or does nothing in case if the trajectory is empty
void AMobBase2D::moveToNextTile()
{
	if (CurrentTrajectory.IsEmpty()) {
		if (GetWorldTimerManager().IsTimerActive(ApproachTimerHandle)) {
			GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
		}
		IsMoving = false;
		DoAction();
		return;
	}

	Direction = NextTile - CurrentTile;
	CurrentTile = NextTile;
	NextTile = *(CurrentTrajectory.begin());
	percentOfPassedDistance = 0.0f;
	CurrentTrajectory.RemoveAt(0);

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
	return HasTask;
}

// Sets the trajectory for the mob movement, if there is no way mob messeges GameMode
void AMobBase2D::SetTrajectory(TArray<FVector> newTrajectory)
{
	CurrentTrajectory = newTrajectory;

	if (IsMoving) {
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
		HasTask = false;
		return;
	}

	IsMoving = true;
	if (CurrentTrajectory.IsEmpty()) {
		NextTile = *(CurrentTrajectory.begin());
	}

	moveToNextTile();
}

void AMobBase2D::StopMovement()
{
	IsMoving = false;

	if (GetWorldTimerManager().IsTimerActive(ApproachTimerHandle)) {
		GetWorldTimerManager().ClearTimer(ApproachTimerHandle);
	}
}

FVector AMobBase2D::GetDirection()
{
	if (!IsMoving) {
		return FVector(0, 0, 0);
	}

	return Direction;
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
