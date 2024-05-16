// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TaskManager.h"
#include "GameFramework/GameModeBase.h"
#include "GameplayMW_GameMode.generated.h"

/// TODO:
/// 1. Установка персонажа/пешку по умолчанию (камеру и т.д.)
/// 2. Установка карты по умолчанию (меню)
/// 3. Логика и механики

/**
 * 
 */
UCLASS()
class MIRWORLD_API AGameplayMW_GameMode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY()
	UTaskManager* Manager;
	
public:

	AGameplayMW_GameMode();
	
	// Implements the logic of victory
	UFUNCTION(BlueprintImplementableEvent, Category = "End of the Game") /// implemented in BPs
	void EndGame_Victory();

	// Implements the logic of defeat
	UFUNCTION(BlueprintImplementableEvent, Category = "End of the Game") /// implemented in BPs
	void EndGame_Defeat();

	// Update the UI score cntr
	UFUNCTION(BlueprintImplementableEvent, Category = "End of the Game") /// implemented in BPs
	void UpdateScore();

protected:
	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void GM_SetPriorityMatrix(TArray<int> NewMatrix, int ID);

	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void GM_AddTask(int TaskType, AActor* Aim, TSet<int> IDs);

	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void GM_ClearTasks();

	UFUNCTION(BlueprintCallable, Category = "Tasks")
	bool GM_StartTask(ACharacterMW2D* Char);
};
