#pragma once

#include <Kismet/GameplayStatics.h>
#include "PathFinder.h"
#include "MobBase.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapInfo.h"
#include "Tile.h"
#include "Tree.h"
#include "Stone.h"
#include "Generator.generated.h"

const uint8 SIDE_SIZE = 100U;

UCLASS(BlueprintType)
class MIRWORLD_API AGenerator : public AActor
{
	GENERATED_BODY()

public:
	AGenerator();


	UFUNCTION(BlueprintCallable)
	void SetIsLoaded(bool value);
	UFUNCTION(BlueprintCallable)
	bool GetIsLoaded() const;

	UFUNCTION(BlueprintCallable)
	void BuildMap(const FVector CenteredLocation, const int X, const int Y);

	UFUNCTION(BlueprintCallable)
	bool TileIsPassable(const int X, const int Y);

	UFUNCTION(BlueprintCallable)
	void SetTileIsPassable_ByCoords(const int X, const int Y, bool NewState);

	UFUNCTION(BlueprintCallable)
	void SetTileIsPassable(FVector TilePos, bool NewState);

	UFUNCTION(BlueprintCallable)
	bool GetTileIsPassable(FVector TilePos);

	UFUNCTION(BlueprintCallable)
	bool TileIsBuildable(const int X, const int Y);

	UFUNCTION(BlueprintCallable)
	TArray<FVector> GetStartPositions();

	UFUNCTION(BlueprintCallable)
	void ClearTiles(TArray<FVector> Tiles);

	// Return the trajectory from Start to Aim or NO_WAY 
	// Radius == 0 refers to a trajectory accurately to the aim 
	// Radius == 1 refers to the shortest trajectory to the aim or to its direct neighbors
	// Radius == 2 refers to the shortest trajectory to the aim or to its neighbors that are no further than two tiles
	UFUNCTION(BlueprintCallable)
	TArray<FVector> GetTrajectory(FVector Start, FVector Aim, int Radius = 0);

	void BuildTiles(const FVector CenteredLocation, const int X, const int Y);

	void BuildResources(const FVector CenteredLocation, const int X, const int Y);

	template <class MI>
	void SetMapInfo(const MI& NewMapInfo);

	const MapInfo& GetMapInfo();

protected:
	virtual void BeginPlay() override;
	MapInfo MapInfo;

	UPROPERTY(VisibleAnywhere, Category = "Save")
	bool bIsLoaded = false;

	//------------------
	// Map Properties
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector2D MapSize;

	/*// max resource amnt on the map
	UPROPERTY(EditAnywhere, Category = "Resources")
	int MaxStoneAmnt = 100;
	int StoneCntr = 0;

	UPROPERTY(EditAnywhere, Category = "Resources")
	int MaxIronAmnt = 50;
	int IronCntr = 0;

	UPROPERTY(EditAnywhere, Category = "Resources")
	int MaxGoldAmnt = 30;
	int GoldCntr = 0;

	UPROPERTY(EditAnywhere, Category = "Resources")
	int MaxFoodAmnt = 100;
	int FoodCntr = 0;*/


	// Container which contains Tiles, displayed in the world
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TArray <TObjectPtr<AActor>> TileMap;
	//------------------
	//Actors' inherited objects
	//Class which contains info about tile we want to create than it which will be located to MapTiles  
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<ATile> TileType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AResource> TreeType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AResource> StoneType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AResource> GoldType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AResource> IronType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AResource> FoodType;
	
	//------------------

	TArray<TObjectPtr<AActor>> ObjectMap;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AResource> ObjectType;

	//------------------
	// for characters
	TArray<FVector> StartPositions = {
		{2500, 2500, 90},
		{2600, 2500, 91},
		{2600, 2600, 92},
		{2500, 2600, 93}
	};
};
