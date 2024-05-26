// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Resource.h"
#include "Gold.generated.h"

UCLASS()
class MIRWORLD_API AGold : public AResource
{
	GENERATED_BODY()

	AGold();

	int EnumValue = 2;
};
