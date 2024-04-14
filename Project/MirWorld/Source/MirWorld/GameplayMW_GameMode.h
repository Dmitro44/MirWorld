// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GameplayMW_GameMode.generated.h"

/// TODO:
/// 1. Установка персонажа/пешку по умолчанию (камеру и т.д.)
/// 2. Установка карты по умолчанию (меню)
/// 3. Логика и механики

/**
 * 
 */
UCLASS()
class MIRWORLD_API AGameplayMW_GameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	// Implements the logic of victory
	UFUNCTION(BlueprintCallable, Category = "End of the Game") ///TODO
	void EndGame_Victory();

	// Implements the logic of defeat
	UFUNCTION(BlueprintCallable, Category = "End of the Game") ///TODO
	void EndGame_Defeat();
};
