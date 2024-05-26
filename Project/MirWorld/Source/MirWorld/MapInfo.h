// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


struct FInfoMatrix
{
	FInfoMatrix() = default;
	FInfoMatrix(int NewColor, int NewResources, int NewBuilding, bool NewbIsGoThrough) {
		Color = NewColor;
		bIsGoThrough = NewbIsGoThrough;
		Resources = NewResources;
		Building = NewBuilding;
	};

	void Clear() {
		bIsGoThrough = true;
		bIsBuildable = true;

		Building = 0;
		Resources = 0;
	}

	bool bIsGoThrough = true;
	bool bIsBuildable = true;

	int Color;
	int Building;
	int Resources;
};

class MIRWORLD_API MapInfo
{
public:
	void GenerateResources(const int X, const int Y);

	void GenerateBiome(const int X, const int Y);

	void CreateEmptyMatrix(const int X, const int Y);

	void GenerateTree(const int X, const int Y);

	void GenerateStone(const int X, const int Y);

	void GenerateGold(const int X, const int Y);

	void GenerateIron(const int X, const int Y);

	void GenerateFood(const int X, const int Y);

	UPROPERTY(EditAnywhere, meta = (Generation))
	float NoiseScale = 0.025f;

	UPROPERTY(EditAnywhere, meta = (Generation))
	float Multiplier = 20.0f;

	UPROPERTY(EditAnywhere, meta = (Generation))
	float Limits = 4.0f;

	TArray<TArray<FInfoMatrix>>& GetMap();
	
	void SetMap(TArray<TArray<FInfoMatrix>> Matrix);


private:
	TArray<TArray<FInfoMatrix>> Map;

	// Refers to the passability of trees on the map
	UPROPERTY(EditAnywhere, Category = "Tile settings") // it's actually can't be accesed through blueprints
	bool bTreeIsPassable = true;

	// Refers to the passability of stones on the map
	UPROPERTY(EditAnywhere, Category = "Tile settings") // it's actually can't be accesed through blueprints
	bool bStoneIsPassable = false;

	// Refers to the passability of golds on the map
	UPROPERTY(EditAnywhere, Category = "Tile settings") // it's actually can't be accesed through blueprints
	bool bGoldIsPassable = false;

	// Refers to the passability of irons on the map
	UPROPERTY(EditAnywhere, Category = "Tile settings") // it's actually can't be accesed through blueprints
	bool bIronIsPassable = false;

	// Refers to the passability of irons on the map
	UPROPERTY(EditAnywhere, Category = "Tile settings") // it's actually can't be accesed through blueprints
	bool bFoodIsPassable = false;

	float RandomResMove;
};
