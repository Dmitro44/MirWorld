// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnumsFictitiousClass.h"
#include "CoreMinimal.h"
#include "BasicActor.h"
#include "Tile.generated.h"

/**
 *
 */
UCLASS()
class MIRWORLD_API ATile : public ABasicActor
{
	GENERATED_BODY()

public:
	ATile();

	UFUNCTION(BlueprintCallable, Category = "Biome")
	int GetBiomeType() const;

	UFUNCTION(BlueprintCallable, Category = "Biome")
	void SetBiomeType(int Newtype);

private:
	UPROPERTY(EditAnywhere, Category = "Biome")
	int BiomeType;
};
