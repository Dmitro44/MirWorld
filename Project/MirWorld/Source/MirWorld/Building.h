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


};
