// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskManager.h"

UTaskManager::UTaskManager()
{
	PriorityMatrix.resize(CharAmnt);
}

void UTaskManager::SetPriorityMatrix(TArray<int> NewMatrix, int ID)
{
	PriorityMatrix[ID] = NewMatrix;
}

void UTaskManager::AddTask(int TaskType, UObject* Aim, TArray<ACharacterMW2D> Recipients)
{
	TaskStorage.emplace_back(TaskType, Aim, false);
}
