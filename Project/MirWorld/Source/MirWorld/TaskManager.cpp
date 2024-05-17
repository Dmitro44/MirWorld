// Fill out your copyright notice in the Description page of Project Settings.

#include "TaskManager.h"

#include "Generator.h"
#include "CharacterMW2D.h"

UTaskManager::UTaskManager()
{
	PriorityMatrix.resize(CharAmnt);
	TaskStorage.resize(TASK_STORAGE_SIZE);
}

void UTaskManager::SetPriorityMatrix(TArray<int> NewMatrix, int ID)
{
	PriorityMatrix[ID] = NewMatrix;
}

void UTaskManager::AddTask(int TaskType, AActor* Aim, TSet<int> IDs) //TODO
{
	switch (static_cast<EActivity>(TaskType))
	{
	case eMoveTo:
		TaskStorage[0].emplace_back(Aim, std::move(IDs));
		break;
	case eExtract: // or
	case eMine:
		TaskStorage[2 + reinterpret_cast<AResource*>(Aim)->GetResourceType()].emplace_back(Aim, std::move(IDs));
		break;
	case eBuild:
		TaskStorage[1].emplace_back(Aim, std::move(IDs));
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

	for (int i = 0; PriorityMatrix[CharID].IsValidIndex(i); ++i) {
		EActivity TaskType;
		if (i == 0) {
			TaskType = eMoveTo;
		}
		else if (i == 1) {

		}
		Priorites[i] = {i, TaskType, PriorityMatrix[CharID][i]};
	}
	std::sort(Priorites.begin(), Priorites.end());

	bool bDoesReceiveTask = false;
	for (auto& now : Priorites) {
		auto& Tasks = TaskStorage[now.ResType];
		for (size_t i = 0; i < Tasks.size(); ++i) {
			auto& Task = Tasks[i];
			if (Task.IDs.Contains(CharID) && PriorityMatrix[CharID][now.ResType] != 0) {
				TArray<AActor*> FoundActors = { nullptr };
				UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGenerator::StaticClass(), FoundActors);
				auto GameMode = reinterpret_cast<AGenerator*>(FoundActors[0]);
				
				if (GameMode) {
					Char->SetAction (
						now.ResType,
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
