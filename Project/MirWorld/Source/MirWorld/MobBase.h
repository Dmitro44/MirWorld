// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MobBase.generated.h"


const TArray<FVector> G_NO_WAY = { {-1, -1, 0} }; // global NO_WAY


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


	// Sets the trajectory for the mob movement
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual void SetTrajectory(TArray<FVector> newTrajectory);

	// Makes the mob follow the set trajectory and DoAction when the trajectory is passed
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual void FollowTrajectory();

	// Makes the mob follow the set trajectory
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual void StopMovement();
	

	// Shows if mob is executing any task
	UFUNCTION(BlueprintCallable, Category = "Mob State")
	virtual bool HasAction() const;

	// Sets specific task and the mob starts its
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void SetAction(int TypeOfAction, TArray<FVector> newTrajectory, AActor* AimPtr) {}; /// pure virtual

	// Performs selected task
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void DoAction() {}; /// pure virtual


	// Sets start pos (for current)
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void SetStartPos(FVector StartPos);

	// Sets the size of a tile's side
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual bool SetTileSize(float newTileSize);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Says to the GameMode, that mob can't perform the task
	virtual void reportImpossibleTask() {}; /// pure virtual

	// Says to the GameMode, that mob has performed the task
	virtual void reportDoneTask() {}; /// pure virtual

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

	// Time amount for moving to the next tile
	UPROPERTY(EditAnywhere, Category = "Mob Movement")
	float SecsForNextTile = 2.0f;

	// Amount of fraims showing the movement to the next tile
	UPROPERTY(EditAnywhere, Category = "Mob Movement")
	int8 MotionFrameAmount = 10;

	// A size of tile's side
	UPROPERTY(EditAnywhere, Category = "Mob Movement")
	float TileSize = 100;


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
