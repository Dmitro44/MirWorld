// Fill out your copyright notice in the Description page of Project Settings.

#include "TaskManager.h"

#include "Generator.h"
#include "CharacterMW2D.h"

UTaskManager::UTaskManager()
{
	PriorityMatrix.resize(CharAmnt);
	for (auto& now : PriorityMatrix) {
		now.SetNum(TASK_STORAGE_SIZE);
		for (auto& innerNow : now) {
			innerNow = 1;
		}
	}
	TaskStorage.resize(TASK_STORAGE_SIZE);
}

void UTaskManager::SetPriorityMatrix(TArray<int> NewMatrix, int ID)
{
	PriorityMatrix[ID] = NewMatrix;
}

void UTaskManager::AddTask(int TaskType, AActor* Aim, TSet<int> IDs)
{
	switch (static_cast<EActivity>(TaskType))
	{
	case eExtract:
		TaskStorage[1 + reinterpret_cast<AResource*>(Aim)->GetResourceType()].emplace_back(Aim, eExtract, std::move(IDs));
		break;
	case eMine:
		TaskStorage[1 + reinterpret_cast<AResource*>(Aim)->GetResourceType()].emplace_back(Aim, eMine, std::move(IDs));
		break;
	case eBuild:
		TaskStorage[0].emplace_back(Aim, eBuild, std::move(IDs));
		break;
	}
}

void UTaskManager::ClearTasks()
{
	for (auto& now : TaskStorage) {
		now.clear();
	}
	TaskStorage.clear();
}

bool UTaskManager::StartTask(ACharacterMW2D* Char) // TODO
{
	int CharID = Char->GetID();
	std::vector<FTask_T> Priorites;
	Priorites.resize(TASK_STORAGE_SIZE);

	// This is used for sorting tasks by their priorities
	// without changing theirs indexes
	for (int i = 0; PriorityMatrix[CharID].IsValidIndex(i); ++i) {
		Priorites[i] = {i, PriorityMatrix[CharID][i]};
	}
	std::sort(Priorites.begin(), Priorites.end());

	TArray<AActor*> FoundActors = { nullptr };
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGenerator::StaticClass(), FoundActors);
	auto Map = reinterpret_cast<AGenerator*>(FoundActors[0]);
	if (!Map) {
		return false;
	}

	// Here we are looking for a suitable task 
	// It also takes into account the priorities
	for (auto& Task_T : Priorites) {
		auto& Tasks = TaskStorage[Task_T.ResType];
		for (size_t i = 0; i < Tasks.size(); ++i) {
			auto& Task = Tasks[i];
			if ((Task.IDs.Contains(CharID) || Task.IDs.IsEmpty()) && 
				PriorityMatrix[CharID][Task_T.ResType]) {
				Char->SetAction(
					Task_T.ResType,
					Task.Aim
				);
				Tasks.erase(Tasks.begin() + i);
				return true;
			}
		}
	}

	return false;
}
