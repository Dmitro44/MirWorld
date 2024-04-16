// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicActor.h"
#include "Resource.generated.h"

/**
 * TODO add uproperty and ufunction macroses
 */
UCLASS()
class MIRWORLD_API AResource : public ABasicActor
{
	GENERATED_BODY()

public:
	virtual float TimeRequired();

	virtual int GiveBunch();

protected:
	float TimeToMine = 5.0f;
	
	int ResorceLeft = 0;
	int BaseRecieve = 3;
};
