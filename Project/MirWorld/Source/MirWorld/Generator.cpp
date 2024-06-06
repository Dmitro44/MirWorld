#include "Generator.h"

AGenerator::AGenerator()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AGenerator::SetIsLoaded(bool value)
{
	bIsLoaded = value;
}

bool AGenerator::GetIsLoaded() const
{
	return bIsLoaded;
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
			case 1: { // tree
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, TreeType.LoadSynchronous(), SpawnTransform);
				AResource* Resource = Cast<AResource>(ObjectToSpawn);
				Resource->SetBiomeType(BiomeType);
				Resource->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
				break;
			}
			case 2: { // stone
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, StoneType.LoadSynchronous(), SpawnTransform);
				AResource* Resource = Cast<AResource>(ObjectToSpawn);
				Resource->SetBiomeType(BiomeType);
				Resource->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
				break;
			}
			case 3: { // gold
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, GoldType.LoadSynchronous(), SpawnTransform);
				AResource* Resource = Cast<AResource>(ObjectToSpawn);
				Resource->SetBiomeType(BiomeType);
				Resource->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
				break;
			}
			case 4: { // iron
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, IronType.LoadSynchronous(), SpawnTransform);
				AResource* Resource = Cast<AResource>(ObjectToSpawn);
				Resource->SetBiomeType(BiomeType);
				Resource->SetInfo(FBlankObjectInfo(InnerIndex, OuterIndex, 0));
				break;
			}
			case 5: { // food
				ObjectToSpawn = UGameplayStatics::BeginDeferredActorSpawnFromClass(
					this, FoodType.LoadSynchronous(), SpawnTransform);
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

	/*StoneCntr = 0;
	IronCntr = 0;
	GoldCntr = 0;
	FoodCntr = 0;*/

	//Creating and allocating memory for matrix
	MapInfo.CreateEmptyMatrix(MapSize.X, MapSize.Y);

	BuildTiles(CenteredLocation, X, Y);

	BuildResources(CenteredLocation, X, Y);

	ClearTiles(StartPositions);
}

bool AGenerator::TileIsPassable(const int X, const int Y)
{
	return MapInfo.GetMap()[X][Y].bIsGoThrough;
}

void AGenerator::SetTileIsPassable_ByCoords(const int X, const int Y, bool NewState)
{
	auto& Map = MapInfo.GetMap();
	if (X < 0 || Y < 0 || X >= Map.Num() || Y >= Map.Num()) {
		return;
	}
	Map[X][Y].bIsGoThrough = NewState;
}

void AGenerator::SetTileIsPassable(FVector TilePos, bool NewState)
{
	int X = (TilePos.X + 1) / SIDE_SIZE;
	int Y = (TilePos.Y + 1) / SIDE_SIZE;
	SetTileIsPassable_ByCoords(X, Y, NewState);
}

bool AGenerator::GetTileIsPassable(FVector TilePos)
{
	int X = (TilePos.X + 1) / SIDE_SIZE;
	int Y = (TilePos.Y + 1) / SIDE_SIZE;
	return TileIsPassable(X, Y);
}

bool AGenerator::TileIsBuildable(const int X, const int Y)
{
	return MapInfo.GetMap()[X][Y].bIsBuildable;
}

TArray<FVector> AGenerator::GetStartPositions()
{
	return StartPositions;
}

void AGenerator::ClearTiles(TArray<FVector> Tiles)
{
	auto& Map = MapInfo.GetMap();
	for (auto Tile : Tiles) {
		TArray<AActor*> FoundActors;
		Tile.Z = 0;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasicActor::StaticClass(), FoundActors);
		for (auto& Object : FoundActors) {
			if (Object->GetActorLocation().Equals(Tile, SIDE_SIZE / 3) && !dynamic_cast<ATile*>(Object)) {
				Object->Destroy();
			}
		}
		Map[static_cast<int>(Tile.X) / SIDE_SIZE][static_cast<int>(Tile.Y) / SIDE_SIZE].Clear();
	}
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
	Start.X = static_cast<int32>(Start.X + 1) / SIDE_SIZE;
	Start.Y = static_cast<int32>(Start.Y + 1) / SIDE_SIZE;
	Aim.X = static_cast<int32>(Aim.X + 1) / SIDE_SIZE;
	Aim.Y = static_cast<int32>(Aim.Y + 1) / SIDE_SIZE;

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
