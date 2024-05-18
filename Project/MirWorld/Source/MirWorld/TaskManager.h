// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Resource.h"
#include "EnumsFictitiousClass.h"
#include "UObject/NoExportTypes.h"
#include "TaskManager.generated.h"

const int MUCH_MORE_THAN_TASKTYPE = 100;
const int NOT_RES_TASKS = 1; // + build

#define TASK_STORAGE_SIZE (RESOURCE_AMNT + NOT_RES_TASKS)

/**
 * Uses priority matrix for task management
 * 
 * MoveTo and Stop have the highest priority and sgould be managed instantly so there are not stored here
 */
UCLASS()
class MIRWORLD_API UTaskManager : public UObject
{
	GENERATED_BODY()

	struct FTask
	{
		AActor* Aim;
		EActivity TaskType;
		TSet<int> IDs;
	};

	struct FTask_T
	{
		int ResType; // ResType == 0 refers to building task
		int PriorityLevel;
		
		bool operator>(const FTask_T& other) {
			return  - (ResType - other.ResType) + (PriorityLevel - other.PriorityLevel) * MUCH_MORE_THAN_TASKTYPE > 0;
		}

		bool operator<(const FTask_T& other) {
			return -(ResType - other.ResType) + (PriorityLevel - other.PriorityLevel) * MUCH_MORE_THAN_TASKTYPE < 0;
		}

		bool operator==(const FTask_T& other) {
			return -(ResType - other.ResType) + (PriorityLevel - other.PriorityLevel) * MUCH_MORE_THAN_TASKTYPE == 0;
		}
	};
	
public:
	UTaskManager();

	// Sets priorities for selected character
	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void SetPriorityMatrix(TArray<int> NewMatrix, int ID);

	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void AddTask(int TaskType, AActor* Aim, TSet<int> IDs);

	// Clear all tasks
	UFUNCTION(BlueprintCallable, Category = "Tasks")
	void ClearTasks();

	// Tries to find a task for the character
	// Returns true if it's succeeded
	UFUNCTION(BlueprintCallable, Category = "Tasks")
	bool StartTask(ACharacterMW2D* Char);



private:
	// Store tasks priorities for characters
	// PriorityMatrix[N] - character's with ID == N priorities
	// size == CharAmnt
	// [][0] - building, [][1]-[][5] - resources (extracting and mining)
	std::vector<TArray<int>> PriorityMatrix;

	// Store tasks instances sorted by their types
	// [0] - building, [1]-[5] - resources (extracting and mining)
	std::vector<std::vector<FTask>> TaskStorage;

	// Refers to how many players can currently receive tasks
	const uint8 CharAmnt = CHARACTERS_AMNT;

	friend FTask_T;
};
