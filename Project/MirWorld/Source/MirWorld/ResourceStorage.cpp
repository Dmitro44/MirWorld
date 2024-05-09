// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceStorage.h"

// Sets default values
AResourceStorage::AResourceStorage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

int AResourceStorage::GetResourceAmnt(int ResourceType)
	{
	if (ResourceCntr.IsValidIndex(ResourceType)) {
		return ResourceCntr[ResourceType];
	}
	return -1;
}

void AResourceStorage::SubResource(int Change, int ResourceType)
{
	if (Change > 0 && ResourceCntr.IsValidIndex(ResourceType)) {
		ResourceCntr[ResourceType] -= Change;

		if (ResourceCntr[ResourceType] < 0) {
			ResourceCntr[ResourceType] = 0;
		}
	}
}

void AResourceStorage::AddResource(int Change, int ResourceType)
{
	if (Change > 0 && ResourceCntr.IsValidIndex(ResourceType)) {
		ResourceCntr[ResourceType] += Change;
	}
}

// Called when the game starts or when spawned
void AResourceStorage::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AResourceStorage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

