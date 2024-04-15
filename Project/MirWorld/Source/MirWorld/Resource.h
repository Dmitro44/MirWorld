// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicActor.h"
#include "Resource.generated.h"

/**
 * 
 */
UCLASS()
class WORKUPTUESDAY_API AResource : public ABasicActor
{
	GENERATED_BODY()
	
public:
	virtual float TimeRequired();

	virtual int GiveBunch();

protected:
	int ResorceLeft;
	int BaseRecieve;

	float TimeToMine;
};
