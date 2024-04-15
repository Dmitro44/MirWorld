#include "Generator.h"

AGenerator::AGenerator()
{
 	PrimaryActorTick.bCanEverTick = false;

}

void AGenerator::BuildResources(const FVector CenteredLocation, const int X, const int Y)
{
	for (auto OuterIndex{ 0 }; OuterIndex <= Y - 1; ++OuterIndex)
	{
		for (auto InnerIndex{ 0 }; InnerIndex <= X - 1; ++InnerIndex)
		{
			int SubstanceType = MapInfo.Map[InnerIndex][OuterIndex].Resources;
			int BiomeType = MapInfo.Map[InnerIndex][OuterIndex].Color;
			
			if (SubstanceType == 0) {
				continue;
			}

			float constexpr SectorSize = 100.f;

			//prepare tile transform
			FVector SpawnLocation =
				FVector(static_cast<float>(InnerIndex) - static_cast<float>(X) / 2.f,
					static_cast<float>(OuterIndex) - static_cast<float>(Y) / 2.f,
					0.f) * SectorSize * 1.f + CenteredLocation;

			FTransform SpawnTransform;
			SpawnTransform.SetLocation(SpawnLocation);

			AActor* ObjectToSpawn;
			
			switch (SubstanceType)
			{
			case 0:
			{
				break;			
			}
			case 1: {
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, TreeType[BiomeType].LoadSynchronous(), SpawnTransform);
				
				ATree* Tree = Cast<ATree>(ObjectToSpawn);

				if (Tree)
				{
					Tree->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
				}

				break;
			}
			case 2: {
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, StoneType[BiomeType].LoadSynchronous(), SpawnTransform);

				AStone* Stone = Cast<AStone>(ObjectToSpawn);

				if (Stone)
				{
					Stone->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
				}

				break;
			}
			default:
				break;
			}

			//		
			ObjectMap.Add(ObjectToSpawn);
			ObjectToSpawn->FinishSpawning(SpawnTransform);
			ObjectToSpawn->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

		}
	}
}

void AGenerator::BuildTiles(const FVector CenteredLocation, const int X, const int Y)
{
	for (auto OuterIndex{ 0 }; OuterIndex <= Y - 1; ++OuterIndex)
	{
		for (auto InnerIndex{ 0 }; InnerIndex <= X - 1; ++InnerIndex)
		{
			float constexpr SectorSize = 100.f;

			//prepare tile transform
			FVector SpawnLocation =
				FVector(static_cast<float>(InnerIndex) - static_cast<float>(X) / 2.f,
					static_cast<float>(OuterIndex) - static_cast<float>(Y) / 2.f,
					0.f) * SectorSize * 1.f + CenteredLocation;

			FTransform SpawnTransform;
			SpawnTransform.SetLocation(SpawnLocation);

			AActor* ObjectToSpawn = nullptr;

			//UGameplayStatics::BeginDeferredActorSpawnFromClassv -- Function performing common gameplay-related tasks.
			//Here function initiates spawning of an actor from a specified class.
			// LoadSynchronous() -- function will wait until the loading process is complete before proceeding			

			int SubstanceType = MapInfo.Map[InnerIndex][OuterIndex].Color;

			ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
				this, TileType[SubstanceType].LoadSynchronous(), SpawnTransform);

			//Common cast
			ATile* Tile = Cast<ATile>(ObjectToSpawn);

			if (Tile)
			{
				Tile->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
			}

			TileMap.Add(ObjectToSpawn);
			ObjectToSpawn->FinishSpawning(SpawnTransform);
			ObjectToSpawn->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		}
	}
}


void AGenerator::BuildMap(const FVector CenteredLocation, const int X, const int Y)
{
	if (TileMap.Num() != 0) {
		return;
	}

	MapSize.X = X;
	MapSize.Y = Y;
	
	//Creating and allocating memory for matrix
	MapInfo.CreateEmptyMatrix(MapSize.X, MapSize.Y);

	BuildTiles(CenteredLocation, X, Y);

	BuildResources(CenteredLocation, X, Y);
}


void AGenerator::BeginPlay()
{
	Super::BeginPlay();
	

}
