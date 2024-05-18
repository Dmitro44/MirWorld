// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

// can be extracted
enum EResource {
	eWood = 0,
	eStone,
	eFood,
	eIron,
	eGold
};

enum EAllResource {
	aWood = 0,
	aStone,
	aFood,
	aIron,
	aGold
	// TODO add craftable resources
};

enum EActivity {
	eMoveTo = -1,
	eExtract,
	eMine,
	eBuild
};

const TArray<FVector> G_NO_WAY = { {-1, -1, 0} }; // global NO_WAY

const uint8 BIOME_AMNT = 3U;

const uint8 RESOURCE_AMNT = 5U;

const uint8 TASK_AMNT = 4U;

const uint8 CHARACTERS_AMNT = 4U;

/**
 * Has no functionality
 */
class MIRWORLD_API EnumsFictitiousClass
{
public:
	EnumsFictitiousClass();
	~EnumsFictitiousClass();
};
