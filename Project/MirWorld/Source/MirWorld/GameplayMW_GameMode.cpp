// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayMW_GameMode.h"

#include "SPlayerPawn.h"

AGameplayMW_GameMode::AGameplayMW_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<ASPlayerPawn> PlayerPawnBPClass(TEXT("/Game/BPs/BP_PlayerPawn"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	Manager = CreateDefaultSubobject<UTaskManager>(TEXT("TaskManager"));
}

void AGameplayMW_GameMode::GM_SetPriorityMatrix(TArray<int> NewMatrix, int ID)
{
	Manager->SetPriorityMatrix(NewMatrix, ID);
}

void AGameplayMW_GameMode::GM_AddTask(int TaskType, AActor* Aim, TSet<int> IDs)
{
	Manager->AddTask(TaskType, Aim, IDs);
}

void AGameplayMW_GameMode::GM_ClearTasks()
{
	Manager->ClearTasks();
}

bool AGameplayMW_GameMode::GM_StartTask(ACharacterMW2D* Char)
{
	return Manager->StartTask(Char);
}
