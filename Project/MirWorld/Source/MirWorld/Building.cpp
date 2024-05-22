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