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


const uint8 BIOME_AMNT = 3U;

const uint8 RESOURCE_AMNT = 5U;

/**
 * Has no functionality
 */
class MIRWORLD_API EnumsFictitiousClass
{
public:
	EnumsFictitiousClass();
	~EnumsFictitiousClass();
};
