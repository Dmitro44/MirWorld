// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnumsFictitiousClass.h"
#include "CoreMinimal.h"
#include "GameplayMW_GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "ResourceStorage.generated.h"


UCLASS()
class MIRWORLD_API AResourceStorage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResourceStorage();

	// Returns the cntr of the selected resource. 
	// Returns -1 if there is no such type of a resource
	UFUNCTION(BlueprintCallable, Category = "Resources")
	int GetResourceAmnt(int ResourceType);

	// Decreases the amnt of the selected resource
	UFUNCTION(BlueprintCallable, Category = "Resources")
	void SubResource(int Change, int ResourceType); // parameter Change should be non negative

	// Increases the amnt of the selected resource
	UFUNCTION(BlueprintCallable, Category = "Resources")
	void AddResource(int Change, int ResourceType); // parameter Change should be non negative

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Consists of cntrs of every resource
	UPROPERTY(EditAnywhere, Category = "Resources")
	TArray<int> ResourceCntr = { 0, 0, 0, 0, 0 }; // for every resource

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
