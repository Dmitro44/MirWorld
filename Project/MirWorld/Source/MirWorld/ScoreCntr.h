// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnumsFictitiousClass.h"
#include "CoreMinimal.h"
#include "GameplayMW_GameMode.h"
#include "GameFramework/Actor.h"
#include "ScoreCntr.generated.h"


UCLASS()
class MIRWORLD_API AScoreCntr : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScoreCntr();

	// Checks the score for victory or defeat
	UFUNCTION(BlueprintCallable, Category = "End of the Game")
	void CheckScore();

	// Increases score
	UFUNCTION(BlueprintCallable, Category = "Score")
	void IncreaseScore(int dScore);

	// Increases score when resources are extracted
	UFUNCTION(BlueprintCallable, Category = "Score")
	void IncreaseScoreByExtracting(int Banch, int ResourceType);

	// Decreases score
	UFUNCTION(BlueprintCallable, Category = "Score")
	void DecreaseScore(int dScore);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Decreases score cyclically
	UFUNCTION(BlueprintCallable, Category = "Score")
	void DecreaseScore_T();

	// Updates score decreasement value
	UFUNCTION(BlueprintCallable, Category = "Score")
	void UpdateDecrease();

	// Called when the game is won
	UFUNCTION(BlueprintCallable, Category = "End of the Game")
	void WinTheGame();

	// Called when the 
	UFUNCTION(BlueprintCallable, Category = "End of the Game")
	void LoseTheGame();

	// Main metric of success in the game
	UPROPERTY(EditAnywhere, Category = "Score")
	int Score = 0;

	// Main metrics of success in the game
	UPROPERTY(EditAnywhere, Category = "Score")
	int ScoreDecrease = 10;

	// Time spot between decreases of the score
	UPROPERTY(EditAnywhere, Category = "Score")
	float DecreaseTime = 3 * 60;

	// Score value required for victory
	UPROPERTY(EditAnywhere, Category = "End of the Game")
	int VictoryValue = 1000;

	// Timer for decreasing the score
	FTimerHandle DecreaseTimerHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// refers to the value of different resource's types
	UPROPERTY(EditAnywhere, Category = "Score")
	TArray<int> ResourceMultiplier = {
		1,
		1,
		1,
		2,
		3
	};

};
