// Fill out your copyright notice in the Description page of Project Settings.


#include "Building.h"

ABuilding::ABuilding() 
{
	PrimaryActorTick.bCanEverTick = false;

	//Create instance of class
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	//Attach it to Root component. It will allow to work with group of tile as one instance
	StaticMeshComponent->SetupAttachment(RootComponent);
}

int8 ABuilding::GetWoodCost()
{
	return WoodCost;
}

int8 ABuilding::GetStoneCost()
{
	return StoneCost;
}

int8 ABuilding::GetIronCost()
{
	return IronCost;
}

int8 ABuilding::GetGoldCost()
{
	return GoldCost;
}

bool ABuilding::GetIsReady()
{
	return bIsReady;
}

void ABuilding::SetIsReady(bool NewState)
{
	bIsReady = NewState;
}

float ABuilding::GetReadinessPercentage()
{
	return static_cast<float>(DoneTimesBuilding) / TimesRequiredBuilding * 100.0F;
}

int ABuilding::Build()
{
	if (++DoneTimesBuilding >= 3) {
		BecomeReady();
	}

	return TimesRequiredBuilding - DoneTimesBuilding;
}

float ABuilding::GetBuildingTime()
{
	return BuildingTime;
}
