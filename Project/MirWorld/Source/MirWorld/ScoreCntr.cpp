// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreCntr.h"

// Sets default values
AScoreCntr::AScoreCntr()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AScoreCntr::CheckScore()
{
	if (UWorld* World = GetWorld()) // checks if world exists
	{
		AGameplayMW_GameMode* MyGameMode = reinterpret_cast<AGameplayMW_GameMode*>(UGameplayStatics::GetGameMode(World)); // checks if custom gamemode exists
		if (MyGameMode)
		{
			MyGameMode->UpdateScore();
		}
	}


	if (Score < 0) {
		LoseTheGame();
	}
	else if (Score >= VictoryValue) {
		WinTheGame();
	}
}

void AScoreCntr::IncreaseScore(int dScore)
{
	Score += dScore;
	CheckScore();
}

void AScoreCntr::IncreaseScoreByExtracting(int Banch, int ResourceType)
{
	if (ResourceMultiplier.IsValidIndex(ResourceType) && Banch > 0) {
		IncreaseScore(Banch * ResourceMultiplier[ResourceType]);
	}
}

// Called when the game starts or when spawned
void AScoreCntr::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(
		DecreaseTimerHandle,
		this,
		&AScoreCntr::DecreaseScore_T,
		DecreaseTime,
		true
	);
}

void AScoreCntr::DecreaseScore_T()
{
	DecreaseScore(ScoreDecrease);
}

void AScoreCntr::DecreaseScore(int dScore)
{
	Score -= dScore;
	CheckScore();
}

int AScoreCntr::GetScore()
{
	return Score;
}

void AScoreCntr::UpdateDecrease()
{
	ScoreDecrease += 10;
}

void AScoreCntr::WinTheGame()
{
	GetWorld()->GetAuthGameMode<AGameplayMW_GameMode>()->EndGame_Victory();
}

void AScoreCntr::LoseTheGame()
{
	GetWorld()->GetAuthGameMode<AGameplayMW_GameMode>()->EndGame_Defeat();

}

// Called every frame
void AScoreCntr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

