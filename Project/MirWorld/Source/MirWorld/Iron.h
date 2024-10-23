// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Resource.h"
#include "Iron.generated.h"

UCLASS()
class MIRWORLD_API AIron : public AResource
{
	GENERATED_BODY()

	AIron();

	int EnumValue = 3;
};
