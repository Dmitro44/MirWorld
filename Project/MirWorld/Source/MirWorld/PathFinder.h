// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MapInfo.h"
#include "EnumsFictitiousClass.h"
#include <vector>
#include "UObject/NoExportTypes.h"
#include "PathFinder.generated.h"

/**
 * 
 */
#define ROW 50
#define COL 50

// Creating a shortcut for int, int pair type
typedef TArray<FVector> TFVector;
typedef TPair<int, int> FPair;
typedef TArray<FVector> TFVector;
// // Creating a shortcut for pair<float, pair<int32, int32>> type
typedef TPair<float, FPair> FP_Pair;
FVector NO_WAY{-1,-1,0};
const float TREE_DELAY = 1.5;
// Creating a shortcut for int, int pair type
typedef std::pair<int, int> Pair;
// Creating a shortcut for pair<int, pair<int, int>> type
typedef std::pair<double, Pair > pPair;
// A structure to hold the necessary parameters
struct cell
{
	// Row and Column index of its parent
	// Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
	int parent_i, parent_j;

	// f = g + h
	double f, g, h;
};

UCLASS()
class MIRWORLD_API APathFinder : public AGameModeBase
{
	GENERATED_BODY()

public:
	static TFVector getPathFromTo(int grid[][COL], FVector start, FVector dest, AActor* WorldAnchor_p);
	static TFVector tracePath(std::vector<std::vector<cell>> cellDetails, Pair dest);
	static float getTexture(FVector pos);
	static void findMinVal(Pair src,Pair& dest);
	static void goNearDest(bool flag);
//private:
	static bool IsNearDest;
	static AActor* WorldAnchor;
};

bool APathFinder::IsNearDest = false;
AActor* APathFinder::WorldAnchor = nullptr;