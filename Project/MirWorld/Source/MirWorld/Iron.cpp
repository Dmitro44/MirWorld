// Fill out your copyright notice in the Description page of Project Settings.


#include "Iron.h"


// Sets default values
AIron::AIron()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create instance of class
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	//Attach it to Root component. It will allow to work with group of tile as one instance
	StaticMeshComponent->SetupAttachment(RootComponent);

	TimeToMine = 4;
	ResorceLeft = FMath::RandRange(75, 125);
	BaseRecieve = 4;
}
