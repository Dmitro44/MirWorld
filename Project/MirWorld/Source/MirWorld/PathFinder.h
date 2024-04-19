// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PathFinder.generated.h"

/**
 * 
 */
#define ROW 50
#define COL 50

// Creating a shortcut for int, int pair type
typedef TArray<FVector> TFVector;

UCLASS()
class MIRWORLD_API APathFinder : public AGameModeBase
{
	GENERATED_BODY()
	static TFVector getPathFromTo(int32 grid[][COL],FVector start, FVector dest);
};
