// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "EnumsFictitiousClass.h"
#include "Resource.h"
#include "MobBase.h"
#include "ScoreCntr.h"
#include "ResourceStorage.h"
#include "CharacterMW.generated.h"


UCLASS()
class MIRWORLD_API ACharacterMW : public AMobBase
{
	GENERATED_BODY()
	
public:
	// Sets specific task and the mob starts its
	// If TypeOfAction == Extract then AimPtr is AResource
	void SetAction(int TypeOfAction, TArray<FVector> NewTrajectory, AActor* AimPtr) override;

	// Perform selected task
	void DoAction() override;

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;

	// Says to the GameMode, that mob can't perform the task
	void reportImpossibleTask() override;

	// Says to the GameMode, that mob has performed the task
	void reportDoneTask() override;

	// Extract a bunch of a resource
	UFUNCTION(BlueprintCallable, Category = "Resource Extracting")
	void ExtractBunch();

	// Shows how many repeats should be produced
	UPROPERTY(EditAnywhere, Category = "Character ID")
	int ID = -1;

	UPROPERTY(EditAnywhere, Category = "Mob State")
	int SelectedAction_ = 0; // see the enum
	EActivity SelectedAction; 


	// Timer for subresults of extracting a resource
	FTimerHandle SubExtractTimerHandle;

	// Shows how many repeats should be produced
	UPROPERTY(EditAnywhere, Category = "Resource Extracting")
	int RepeatsRequired = 5;

	// Cntr for repears of resource extracting
	int RepeatsCntr = 0;


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
};
