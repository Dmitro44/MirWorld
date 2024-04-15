#pragma once

#include <Kismet/GameplayStatics.h>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapInfo.h"
#include "Tile.h"
#include "Tree.h"
#include "Stone.h"
#include "Generator.generated.h"

UCLASS(BlueprintType)
class MIRWORLD_API AGenerator : public AActor
{
	GENERATED_BODY()

public:
	AGenerator();


	UFUNCTION(BlueprintCallable)
	void BuildMap(const FVector CenteredLocation, const int X, const int Y);

	void BuildTiles(const FVector CenteredLocation, const int X, const int Y);

	void BuildResources(const FVector CenteredLocation, const int X, const int Y);

protected:
	virtual void BeginPlay() override;

	MapInfo MapInfo;


	// Map Properties

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector2D MapSize;

	// Container which contains Tiles, displayed in the world
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TArray <TObjectPtr<AActor>> TileMap;
	//------------------
	//Actors' inherited objects
	//Class which contains info about tile we want to create than it which will be located to MapTiles  
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TSoftClassPtr<ATile>> TileType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TSoftClassPtr<ATree>> TreeType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TSoftClassPtr<AStone>> StoneType;

	//------------------

	TArray<TObjectPtr<AActor>> ObjectMap;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AResource> ObjectType;

};
