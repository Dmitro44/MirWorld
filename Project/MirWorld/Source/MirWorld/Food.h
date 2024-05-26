// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Resource.h"
#include "Food.generated.h"

UCLASS()
class MIRWORLD_API AFood : public AResource
{
	GENERATED_BODY()

	AFood();

	int EnumValue = 4;
};
