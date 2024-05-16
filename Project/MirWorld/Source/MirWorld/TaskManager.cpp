// Fill out your copyright notice in the Description page of Project Settings.

#include "TaskManager.h"

#include "Generator.h"
#include "CharacterMW2D.h"

UTaskManager::UTaskManager()
{
	PriorityMatrix.resize(CharAmnt);
}

void UTaskManager::SetPriorityMatrix(TArray<int> NewMatrix, int ID)
{
	PriorityMatrix[ID] = NewMatrix;
}

void UTaskManager::AddTask(int TaskType, AActor* Aim, TSet<int> IDs)
{
	TaskStorage[TaskType].emplace_back(Aim, std::move(IDs));
}

void UTaskManager::ClearTasks()
{
	for (auto& now : TaskStorage) {
		now.clear();
	}
	TaskStorage.clear();
}

bool UTaskManager::StartTask(ACharacterMW2D* Char)
{
	int CharID = Char->GetID();
	std::vector<FTask_T> Priorites;
	Priorites.resize(TASK_AMNT);

	for (int i = 0; PriorityMatrix[CharID].IsValidIndex(i); ++i) {
		Priorites[i] = {i, PriorityMatrix[CharID][i]};
	}
	std::sort(Priorites.begin(), Priorites.end());

	bool bDoesReceiveTask = false;
	for (auto& now : Priorites) {
		auto& Tasks = TaskStorage[now.Type];
		for (size_t i = 0; i < Tasks.size(); ++i) {
			auto& Task = Tasks[i];
			if (Task.IDs.Contains(CharID)) {
				TArray<AActor*> FoundActors = { nullptr };
				UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGenerator::StaticClass(), FoundActors);
				auto GameMode = reinterpret_cast<AGenerator*>(FoundActors[0]);
				
				if (GameMode) {
					Char->SetAction (
						now.Type,
						GameMode->GetTrajectory(Char->GetCurrentTile(), Task.Aim->GetActorLocation()), // It requires tests
						Task.Aim
					);
					bDoesReceiveTask = true;
					Tasks.erase(Tasks.begin() + i);
					break;
				}
			}
		}

		if (bDoesReceiveTask) {
			break;
		}
	}

	return bDoesReceiveTask;
}
