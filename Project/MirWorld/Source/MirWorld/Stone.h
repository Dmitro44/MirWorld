// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Resource.h"
#include "Stone.generated.h"

/**
 * 
 */
UCLASS()
class MIRWORLD_API AStone : public AResource
{
	GENERATED_BODY()

	AStone();

	int EnumValue = 1;
	//float TimeRequired();

	//UFUNCTION(BlueprintCallable);
	//int GiveBunch();
};
