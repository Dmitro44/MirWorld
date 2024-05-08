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

	bool bIsGoThrough;
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

	UPROPERTY(EditAnywhere, meta = (Generation))
	float NoiseScale = 0.025f;

	UPROPERTY(EditAnywhere, meta = (Generation))
	float Multiplier = 20.0f;

	UPROPERTY(EditAnywhere, meta = (Generation))
	float Limits = 4.0f;

	TArray<TArray<FInfoMatrix>>& GetMap();

private:
	TArray<TArray<FInfoMatrix>> Map;
};
