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
			int SubstanceType = MapInfo.GetMap()[InnerIndex][OuterIndex].Resources;
			int BiomeType = MapInfo.GetMap()[InnerIndex][OuterIndex].Color;

			if (SubstanceType == 0) {
				continue;
			}

			float constexpr SectorSize = 100.f;

			//prepare tile transform
			FVector SpawnLocation =
				FVector(static_cast<float>(InnerIndex) - static_cast<float>(X) / 2.f,
					static_cast<float>(OuterIndex) - static_cast<float>(Y) / 2.f,
					0.f) * SectorSize + CenteredLocation;

			FTransform SpawnTransform;
			SpawnTransform.SetLocation(SpawnLocation);

			AActor* ObjectToSpawn;

			switch (SubstanceType)
			{
			case 1: {
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, TreeType.LoadSynchronous(), SpawnTransform);
				AResource* Resource = Cast<AResource>(ObjectToSpawn);
				Resource->SetBiomeType(BiomeType);
				Resource->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
				break;
			}
			case 2: {
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, StoneType.LoadSynchronous(), SpawnTransform);
				AResource* Resource = Cast<AResource>(ObjectToSpawn);
				Resource->SetBiomeType(BiomeType);
				Resource->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
				break;
			}
			default: {
				break;
			}
			}

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

			int BiomeType = MapInfo.GetMap()[InnerIndex][OuterIndex].Color;

			ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
				this, TileType.LoadSynchronous(), SpawnTransform);

			ATile* Tile = Cast<ATile>(ObjectToSpawn);
			Tile->SetBiomeType(BiomeType);
			Tile->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));

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

bool AGenerator::TileIsPassable(const int X, const int Y)
{
	return MapInfo.GetMap()[X][Y].bIsGoThrough;
}

bool AGenerator::TileIsBuildable(const int X, const int Y)
{
	return MapInfo.GetMap()[X][Y].bIsBuildable;
}

TArray<FVector> AGenerator::GetTrajectory(FVector Start, FVector Aim)
{
	int32 PassabilityMatrix[ROW][COL];
	auto& Map = MapInfo.GetMap();

	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COL; ++j) {
			PassabilityMatrix[i][j] = (Map[i][j].bIsGoThrough ? 1 : 0);
		}
	}

	// We consider that first tile is located in 0,0,0 and its side size is SIDE_SIZE 
	Start.X = static_cast<int32>(Start.X) / SIDE_SIZE;
	Start.Y = static_cast<int32>(Start.Y) / SIDE_SIZE;
	Aim.X = static_cast<int32>(Aim.X) / SIDE_SIZE;
	Aim.Y = static_cast<int32>(Aim.Y) / SIDE_SIZE;

	TArray<FVector> Trajectory = APathFinder::getPathFromTo(PassabilityMatrix, Start, Aim); // it's only indexes for now

	if (Trajectory == G_NO_WAY) {
		return Trajectory;
	}

	TArray<FVector> ReturnArray;

	for (int i = Trajectory.Num() - 2; i >= 0; --i) {
		ReturnArray.Emplace(
			Trajectory[i].X * SIDE_SIZE,
			Trajectory[i].Y * SIDE_SIZE,
			Trajectory[i].Z
		);
	}
	return ReturnArray;
}


void AGenerator::BeginPlay()
{
	Super::BeginPlay();
}
