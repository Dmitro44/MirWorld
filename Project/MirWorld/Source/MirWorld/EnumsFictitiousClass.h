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
	// add craftable resources
};


/**
 * Has no functionality
 */
class MIRWORLD_API EnumsFictitiousClass
{
public:
	EnumsFictitiousClass();
	~EnumsFictitiousClass();
};
