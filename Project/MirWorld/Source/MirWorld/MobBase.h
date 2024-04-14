// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MobBase.generated.h"


const TArray<FVector> NO_WAY = { {-1, -1, 0} };


UCLASS()
class MIRWORLD_API AMobBase : public AActor
{
	GENERATED_BODY()

	// Mob goes to the next tile of trajectory or does nothing in case if the trajectory is empty
	void moveToNextTile();

	// Mob moves closer to the next tile in the trajectory
	void goCloserToNextTile();

	// Percent of already passed disrance between the current tile and the next
	float percentOfPassedDistance = 0.0f;
	
public:	
	// Sets default values for this actor's properties
	AMobBase();

	// Sets the trajectory for the mob movement, returns false if there is no way
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual void SetTrajectory(TArray<FVector> newTrajectory);

	// Makes the mob follow the set trajectory
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual void FollowTrajectory();

	// Makes the mob follow the set trajectory
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual void StopMovement();

	// Set specific task
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void SetAction() {}; /// pure virtual

	// Perform selected task
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void DoAction() {}; /// pure virtual

	// Set start pos (for current)
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void SetStartPos(FVector StartPos);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Says to the GameMode, that mob can't perform the task
	virtual void reportImpossibleTask() {}; /// pure virtual

	// Says to the GameMode, that mob has performed the task
	virtual void reportDoneTask() {}; /// pure virtual

	// Timer for initializing movement to the next tile
	FTimerHandle NextTileTimerHandle;

	// Timer for initializing the next tile approach process
	FTimerHandle ApproachTimerHandle;


	// Tile where mob is located. Tile mob can go back to
	UPROPERTY(EditAnywhere, Category = "Mob State")
	FVector CurrentTile = { 0, 0, 0 };

	// Tile mob is heading to
	UPROPERTY(EditAnywhere, Category = "Mob State")
	FVector NextTile = { -1, -1, 0 };

	// Trajectory of movement
	UPROPERTY(EditAnywhere, Category = "Mob State")
	TArray<FVector> CurrentTrajectory;

	// Shows if mob is moving
	UPROPERTY(EditAnywhere, Category = "Mob State")
	bool IsMoving = false;

	// Shows if mob should interrupt the movement
	UPROPERTY(EditAnywhere, Category = "Mob State")
	bool ShouldBeStopped = false;

	// Shows if mob has finished the movement
	UPROPERTY(EditAnywhere, Category = "Mob State")
	bool HasPassedTrajectory = true;

	// Time amount for moving to the next tile
	UPROPERTY(EditAnywhere, Category = "Mob Movement")
	float SecsForNextTile = 2.0f;

	// Amount of fraims showing the movement to the next tile
	UPROPERTY(EditAnywhere, Category = "Mob Movement")
	int8 MotionFrameAmount = 10;


	// How fast mob moves to the next tile
	UPROPERTY(EditAnywhere, Category = "Mob Properties")
	float MovementSpeed = 1.0f;

	// How much health the mob has at maximum
	UPROPERTY(EditAnywhere, Category = "Mob Properties")
	float MaxHealthPoints = 20.0f;

	// How much health the mob currently has
	UPROPERTY(EditAnywhere, Category = "Mob State")
	float CurrentHealthPoints = 20.0f;


	// Shows if mob has some incomplete mission
	UPROPERTY(EditAnywhere, Category = "Mob State")
	bool HasTask = false;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
