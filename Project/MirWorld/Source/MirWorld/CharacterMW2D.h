// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "Generator.h"
#include "Resource.h"
#include "Building.h"
#include "MobBase2D.h"
#include "EnumsFictitiousClass.h"
#include "ScoreCntr.h"
#include "ResourceStorage.h"
#include "CharacterMW2D.generated.h"


/**
 * Main characters in MirWorld
 */
UCLASS()
class MIRWORLD_API ACharacterMW2D : public AMobBase2D
{
	GENERATED_BODY()



	// Actions //----------------------------------------------------------------------------------------------

public:
	// Sets specific task and the mob starts its
	// If TypeOfAction == Extract or Mine then AimPtr is AResource
	// If TypeOfAction == MoveTo then AimPtr is any actor with the position to go to
	void SetAction(int TypeOfAction, AActor* AimPtr) override;

	// Shows if work animation must be played
	UFUNCTION(BlueprintCallable, Category = "Mob Action")
	bool IsWorking() const;

protected:
	// Perform selected task
	void DoAction() override;

	UPROPERTY(EditAnywhere, Category = "Mob State")
	int SelectedAction_ = 2; // see the enum
	EActivity SelectedAction = eMoveTo;

	// Shows if work animation must be played
	bool bIsWorking = false;

	// Shows how many repeats should be produced
	UPROPERTY(EditAnywhere, Category = "Resource Extracting")
	int RepeatsRequired = 5;

	// Cntr for repeats
	int RepeatsCntr = 0;

	// Timer for mining and building
	FTimerHandle TaskTimerHandle;

	// End of Actions //---------------------------------------------------------------------------------------



	// Resource Actions //----------------------------------------------------------------------------------------------

protected:
	// Checks if aim resource is valid
	UFUNCTION(BlueprintCallable, Category = "Character ID")
	bool IsResourceValid(AResource* Resource);

	void PrepareToResourceTask();

	// Extract a bunch of a resource or extract the whole res point 
	UFUNCTION(BlueprintCallable, Category = "Resource Extracting")
	void MineResource();

	// Shows what resources the character can extract
	UPROPERTY(EditAnywhere, Category = "Character Stats")
	TArray<bool> CanExtract = {
		true, // wood
		true, // stone
		true, // food
		false, // iron
		false // gold
	};

	// Shows how fast resources can be extracted by the character
	UPROPERTY(EditAnywhere, Category = "Character Stats")
	TArray<float> ExtractSpeeds = {
		1, // wood
		1, // stone
		1, // food
		1, // iron
		1 // gold
	};

	// what resource is axtracting
	AResource* Resource;

	// refers to the storage of the resources
	AResourceStorage* ResourceStorage = nullptr;

	// refers to the score cntr
	AScoreCntr* ScoreCntr = nullptr;

	// End of Resource Actions //---------------------------------------------------------------------------------------

	

	// Building Actions //----------------------------------------------------------------------------------------------
	
	// what building must be constucted
	ABuilding* Building;

	void Build();

	// End of Building Actions //---------------------------------------------------------------------------------------



	// Character's Basics //----------------------------------------------------------------------------------------------

public:
	UFUNCTION(BlueprintCallable, Category = "Character ID")
	int GetID() const;

	UFUNCTION(BlueprintCallable, Category = "Character ID")
	void SetID(int NewID);

protected:
	// Unique for every character
	UPROPERTY(EditAnywhere, Category = "Character ID")
	int ID = -1;

	// End of Character's Basics //---------------------------------------------------------------------------------------
	
	

	// Any Actor's stuff //----------------------------------------------------------------------------------------------

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// End of Any Actor's stuff //---------------------------------------------------------------------------------------
};
