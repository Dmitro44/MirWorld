// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnumsFictitiousClass.h"
#include "Generator.h"
#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MobBase2D.generated.h"


const float INSTANT_REBOUND_COEFF = 0.05;


/**
 * Basic class for all mobs and characters in MirWorld
 */
UCLASS()
class MIRWORLD_API AMobBase2D : public APaperCharacter
{
	GENERATED_BODY()



	// Any Actor's stuff //----------------------------------------------------------------------------------------------
	
public:
	// Sets default values for this actor's properties
	AMobBase2D();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// End of Any Actor's stuff //---------------------------------------------------------------------------------------



	// Movement //----------------------------------------------------------------------------------------------
	
public:
	// Tries to move to set pos
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual void GoTo(FVector Destination);

	// Tries to find other pos to char when its destination become blocked
	virtual void GoBack();

	// Stops any movement and activities
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void StopAll();

	// Returns trajectory from current Tile to the Aim 
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual TArray<FVector> GetPathFromMob(FVector Aim);

	// Returns the mob direction of moving or (0, 0, 0) if it's not moving
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual FVector GetDirection();

protected:
	// Mob moves closer to the next tile in the trajectory
	void GoCloserToNextTile();

	// Shows if mob goes back to the previous tile
	bool bIsGoingBack = false;

	// Shows if mob goes not to direction exactly but to its circle
	bool bGoToCircle = false;

	// Trajectory to the aim
	TArray<FVector> Path;

	// Timer for initializing the next tile approach process
	FTimerHandle ApproachTimerHandle;

	// Percent of already passed disrance between the current tile and the next
	float PercentOfPassedDistance = 0.0f;

	// Where mob is heading if its moving
	// Z-pos doesn't matter
	FVector Destination;

	// Tile where mob is located. Tile mob can go back to
	UPROPERTY(EditAnywhere, Category = "Mob State")
	FVector CurrentTile = { 0, 0, 0 };

	// Tile mob is heading to
	UPROPERTY(EditAnywhere, Category = "Mob State")
	FVector NextTile = { -1, -1, 0 };

	// Shows if mob is moving
	UPROPERTY(EditAnywhere, Category = "Mob State")
	bool bIsMoving = false;

	// Time amount for moving to the next tile
	UPROPERTY(EditAnywhere, Category = "Mob Movement")
	float SecsForNextTile = 2.0f;

	// Amount of fraims showing the movement to the next tile
	UPROPERTY(EditAnywhere, Category = "Mob Movement")
	int8 MotionFrameAmount = 10;

	// How fast mob moves to the next tile
	UPROPERTY(EditAnywhere, Category = "Mob Properties")
	float MovementSpeed = 1.0f;

	// Refers to rhe last movement direction
	FVector Direction = { 0, 0, 0 };

	// End of Movement //---------------------------------------------------------------------------------------



	// Actions //----------------------------------------------------------------------------------------------

	// Shows if mob is executing any task
	UFUNCTION(BlueprintCallable, Category = "Mob State")
	virtual bool HasAction() const;

	// Sets specific task and the mob starts its
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void SetAction(int TypeOfAction, AActor* AimPtr) {}; /// pure virtual

	// Performs selected task
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void DoAction() {}; /// pure virtual

protected:
	// Shows if mob has some incomplete mission
	UPROPERTY(EditAnywhere, Category = "Mob State")
	bool bHasTask = false;

	// End of Actions //---------------------------------------------------------------------------------------



	// Mob's Basics //----------------------------------------------------------------------------------------------

public:
	// Sets start pos (for current)
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	virtual void SetStartPos(FVector StartPos);

	// Sets the size of a tile's side
	UFUNCTION(BlueprintCallable, Category = "Mob Movement")
	virtual bool SetTileSize(float newTileSize);

	// Says to the GameMode, that mob can't perform the task
	UFUNCTION(BlueprintImplementableEvent, Category = "Mob Action") // implemented in BPs
	void ReportImpossibleTask();

	// Says to the GameMode, that mob has performed the task
	UFUNCTION(BlueprintImplementableEvent, Category = "Mob Action") // implemented in BPs
	void ReportDoneTask();

protected:
	// A size of tile's side
	UPROPERTY(EditAnywhere, Category = "Mob Movement")
	float TileSize = 100;

	// How much health the mob has at maximum
	UPROPERTY(EditAnywhere, Category = "Mob Properties")
	float MaxHealthPoints = 20.0f;

	// How much health the mob currently has
	UPROPERTY(EditAnywhere, Category = "Mob State")
	float CurrentHealthPoints = 20.0f;

	// End of Mob's Basics //---------------------------------------------------------------------------------------
};
