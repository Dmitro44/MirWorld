// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicActor.h"
#include "Resource.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MIRWORLD_API AResource : public ABasicActor
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	float TimeRequired();

	UFUNCTION(BlueprintCallable) 
	int GiveBunch();

protected:
	float TimeToMine = 5.0f;
	
	int ResorceLeft = 0;
	int BaseRecieve = 3;
	int EnumValue;
};
