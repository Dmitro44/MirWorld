// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnumsFictitiousClass.h"
#include "CoreMinimal.h"
#include "BasicActor.h"
#include "Resource.generated.h"



UCLASS(BlueprintType)
class MIRWORLD_API AResource : public ABasicActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Resource")
	float TimeRequired();

	UFUNCTION(BlueprintCallable, Category = "Resource")
	int GiveBunch();

	UFUNCTION(BlueprintCallable, Category = "Resource")
	int GetResourceType() const;

protected:
	UPROPERTY(EditAnywhere, Category = "Resource")
	float TimeToMine = 5.0f;
	

	int ResorceLeft = 0;

	UPROPERTY(EditAnywhere, Category = "Resource")
	int BaseRecieve = 3;

	UPROPERTY(EditAnywhere, Category = "Resource")
	int ResourceType = 0; // see the enum
};
