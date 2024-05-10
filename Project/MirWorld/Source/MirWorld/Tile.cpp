// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"

ATile::ATile()
{
	PrimaryActorTick.bCanEverTick = false;

	//Create instance of class
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	//Attach it to Root component. It will allow to work with group of tile as one instance
	StaticMeshComponent->SetupAttachment(RootComponent);
}

int ATile::GetBiomeType() const
{
	return BiomeType;
}

void ATile::SetBiomeType(int Newtype)
{
	if (Newtype >= 0 && Newtype < BIOME_AMNT) {
		BiomeType = Newtype;
	}
}
