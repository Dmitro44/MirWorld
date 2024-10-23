// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicActor.h"
#include "Building.generated.h"

/**
 * 
 */
UCLASS()
class MIRWORLD_API ABuilding : public ABasicActor
{
	GENERATED_BODY()
	
	ABuilding();

	int8 GetWoodCost();
	int8 GetStoneCost();
	int8 GetIronCost();
	int8 GetGoldCost();

protected:
	int8 WoodCost;
	int8 StoneCost;
	int8 IronCost;
	int8 GoldCost;
	

	// Building //----------------------------------------------------------------------------------------------

public:
	// Commit one time for building
	UFUNCTION(BlueprintCallable, Category = "Building")
	int Build();

	UFUNCTION(BlueprintCallable, Category = "Building")
	float GetBuildingTime();

	UFUNCTION(BlueprintCallable, Category = "Building")
	bool GetIsReady();

	UFUNCTION(BlueprintCallable, Category = "Building")
	void SetIsReady(bool NewState);

	UFUNCTION(BlueprintCallable, Category = "Building")
	float GetReadinessPercentage();

protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Building") /// implemented in BPs
	void BecomeReady();

	bool bIsReady = false;

	// One "portion"
	UPROPERTY(EditAnywhere, Category = "Building")
	float BuildingTime = 7.0;

	UPROPERTY(EditAnywhere, Category = "Building")
	int TimesRequiredBuilding = 3;

	int DoneTimesBuilding = 0;

	// End of Building //---------------------------------------------------------------------------------------

};
