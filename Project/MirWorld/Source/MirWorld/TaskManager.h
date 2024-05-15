// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterMW2D.h"
#include "EnumsFictitiousClass.h"
#include "UObject/NoExportTypes.h"
#include "TaskManager.generated.h"


/**
 * Uses priority matrix for task management
 */
UCLASS()
class MIRWORLD_API UTaskManager : public UObject
{
	GENERATED_BODY()

	struct FTask
	{
		uint8 Type;
		UObject* Aim;
		bool bDone = false;
	};
	
public:
	UTaskManager();

	// Sets priorities for selected character
	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void SetPriorityMatrix(TArray<int> NewMatrix, int ID);

	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void AddTask(int TaskType, UObject* Aim, TArray<ACharacterMW2D> Recipients);

	// Clear all tasks
	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void ClearTasks();

	// Tries to find a task for the character
	// Returns true if it's succeeded
	UFUNCTION(BlueprintCallable, Category = "Tasks")
	bool DoTask(int ID);

private:
	// Store tasks priorities for characters
	// PriorityMatrix[N] - character's with ID == N priorities
	// size == CharAmnt
	std::vector<TArray<int>> PriorityMatrix;

	// Store task referenses for characters
	std::vector<std::queue<FTask*>> TaskList;

	// Store tasks instances
	std::vector<FTask> TaskStorage;

	// Refers to how many players can currently receive tasks
	const uint8 CharAmnt = CHARACTERS_AMNT;

};
