// Fill out your copyright notice in the Description page of Project Settings.


#include "MapInfo.h"

void MapInfo::GenerateResources(const int X, const int Y)
{
	GenerateTree(X, Y);
	GenerateStone(X, Y);
	GenerateGold(X, Y);
	GenerateIron(X, Y);
	GenerateFood(X, Y);
}

void MapInfo::GenerateTree(const int X, const int Y)
{
	float Randomize = FMath::RandRange(0, 1);
	float Tree = FMath::PerlinNoise2D(FVector2D(X * 0.1f + 0.1f * Randomize + RandomResMove,
												Y * 0.1f + 0.1f * Randomize + RandomResMove)) * 50.0f;

	//GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Tree_ %f"), Tree));

	if (Tree > 2) {
		Map[X][Y].Resources = 1;
		Map[X][Y].bIsGoThrough = bTreeIsPassable;
		Map[X][Y].bIsBuildable = false;
	}
}

void MapInfo::GenerateStone(const int X, const int Y)
{
	float Stone = FMath::PerlinNoise2D(FVector2D(X + 0.1 + FMath::RandRange(-10, 10), 
												 Y + 0.1 + FMath::RandRange(-10, 10))) * 100.0f;

	//GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Stone_ %f"), Stone));

	if (Stone > 17) {
		Map[X][Y].Resources = 2;
		Map[X][Y].bIsGoThrough = bStoneIsPassable;
		Map[X][Y].bIsBuildable = false;
	}
}

void MapInfo::GenerateGold(const int X, const int Y)
{
	float Gold = FMath::PerlinNoise2D(FVector2D(X + 0.1 + FMath::RandRange(-10, 10), 
												 Y + 0.1 + FMath::RandRange(-10, 10))) * 100.0f;

	//GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Stone_ %f"), Gold));

	if (Gold > 21) {
		Map[X][Y].Resources = 3;
		Map[X][Y].bIsGoThrough = bGoldIsPassable;
		Map[X][Y].bIsBuildable = false;
	}
}

void MapInfo::GenerateIron(const int X, const int Y)
{
	float Iron = FMath::PerlinNoise2D(FVector2D(X + 0.1 + FMath::RandRange(-10, 10), 
												 Y + 0.1 + FMath::RandRange(-10, 10))) * 100.0f;

	//GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Stone_ %f"), Gold));

	if (Iron > 21) {
		Map[X][Y].Resources = 4;
		Map[X][Y].bIsGoThrough = bIronIsPassable;
		Map[X][Y].bIsBuildable = false;
	}
}

void MapInfo::GenerateFood(const int X, const int Y)
{
	float Food = FMath::PerlinNoise2D(FVector2D(X + 0.1 + FMath::RandRange(-10, 10), 
												 Y + 0.1 + FMath::RandRange(-10, 10))) * 100.0f;

	//GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Stone_ %f"), Gold));

	if (Food > 20) {
		Map[X][Y].Resources = 5;
		Map[X][Y].bIsGoThrough = bFoodIsPassable;
		Map[X][Y].bIsBuildable = false;
	}
}

TArray<TArray<FInfoMatrix>>& MapInfo::GetMap()
{
	return Map;
}

void MapInfo::SetMap(TArray<TArray<FInfoMatrix>> Matrix)
{
	Map = Matrix;
}

void MapInfo::GenerateBiome(const int X, const int Y)
{
	float RandomBioMove = FMath::RandRange(-100, 100); // TODO!!!
	RandomResMove = RandomBioMove + 100 + FMath::RandRange(-100, 100);

	for (int OuterIndex{ 0 }; OuterIndex < X; ++OuterIndex)
	{
		for (int InnerIndex{ 0 }; InnerIndex < Y; ++InnerIndex)
		{
			//Generation of Bioms
			float Z = FMath::PerlinNoise2D(FVector2D((OuterIndex * NoiseScale + 0.01f) + RandomBioMove, (InnerIndex * NoiseScale + 0.01f)) + RandomBioMove) * Multiplier;

			//GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Z %f"), Z));

			if (Z < -Limits) {
				Map[InnerIndex][OuterIndex].Color = 1;
			}
			if (Z > Limits) {
				Map[InnerIndex][OuterIndex].Color = 2;
			}


			GenerateResources(InnerIndex, OuterIndex);
		}
	}
}

void MapInfo::CreateEmptyMatrix(const int X, const int Y)
{
	TArray<TArray<FInfoMatrix>> NewMap;
	FInfoMatrix ElementTemplate = FInfoMatrix(0, 0, 0, true);

	for (int RowIndex = 0; RowIndex < Y; ++RowIndex)
	{
		TArray<FInfoMatrix> Row;

		for (int ColumnIndex = 0; ColumnIndex < X; ++ColumnIndex)
		{
			Row.Add(ElementTemplate);
		}
		NewMap.Add(Row);
	}

	Map = NewMap;

	GenerateBiome(X, Y);
}