// Fill out your copyright notice in the Description page of Project Settings.


#include "MapInfo.h"

void MapInfo::GenerateResources(const int X, const int Y)
{
	GenerateTree(X, Y);
	GenerateStone(X, Y);
}

void MapInfo::GenerateTree(const int X, const int Y)
{
	float Randomize = FMath::RandRange(-10, 10);
	float Tree = FMath::PerlinNoise2D(FVector2D(X * 0.1f + 0.1f, Y * 0.1f + 0.1f)) * 50.0f;

	//GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Tree_ %f"), Tree));

	if (Tree > 2) {
		Map[X][Y].Resources = 1;
		Map[X][Y].bIsGoThrough = bTreeIsPassable;
		Map[X][Y].bIsBuildable = false;
	}
}

void MapInfo::GenerateStone(const int X, const int Y)
{
	float Randomize = FMath::RandRange(-10, 10);
	float Stone = FMath::PerlinNoise2D(FVector2D(X + 0.1 + FMath::RandRange(-10, 10), Y + 0.1 + FMath::RandRange(-10, 10))) * 100.0f;

	//GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Stone_ %f"), Stone));

	if (Stone > 15) {
		Map[X][Y].Resources = 2;
		Map[X][Y].bIsGoThrough = bStoneIsPassable;
		Map[X][Y].bIsBuildable = false;
	}
}

TArray<TArray<FInfoMatrix>>& MapInfo::GetMap()
{
	return Map;
}

void MapInfo::GenerateBiome(const int X, const int Y)
{
	float RandomMove = FMath::RandRange(-5, 5);

	for (int OuterIndex{ 0 }; OuterIndex < X; ++OuterIndex)
	{
		for (int InnerIndex{ 0 }; InnerIndex < Y; ++InnerIndex)
		{
			//Generation of Bioms
			float Z = FMath::PerlinNoise2D(FVector2D((OuterIndex * NoiseScale + 0.01f) + RandomMove, (InnerIndex * NoiseScale + 0.01f)) + RandomMove) * Multiplier;

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