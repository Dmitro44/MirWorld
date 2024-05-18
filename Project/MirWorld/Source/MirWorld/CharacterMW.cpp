// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterMW.h"


void ACharacterMW::DoAction()
{
	if (SelectedAction == eExtract) {
		RepeatsCntr = 0;
		GetWorldTimerManager().SetTimer(
			SubExtractTimerHandle,
			this,
			&ACharacterMW::ExtractBunch,
			Resource->ExtractTime(),
			true
		);
	}
	HasTask = false;
}

void ACharacterMW::BeginPlay()
{
	AMobBase::BeginPlay(); // check
}

void ACharacterMW::ReportImpossibleTask()
{

}

void ACharacterMW::ReportDoneTask()
{

}

void ACharacterMW::ExtractBunch()
{
	++RepeatsCntr;
	if (RepeatsCntr == RepeatsRequired - 1) {
		GetWorldTimerManager().ClearTimer(SubExtractTimerHandle);
	}

	if (ResourceStorage == nullptr) {
		TArray<AActor*> FoundActors = { nullptr };
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AResourceStorage::StaticClass(), FoundActors);
		ResourceStorage = reinterpret_cast<AResourceStorage*>(FoundActors[0]);
	} 
	
	if (ScoreCntr == nullptr) {
		TArray<AActor*> FoundActors = { nullptr };
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AScoreCntr::StaticClass(), FoundActors);
		ScoreCntr = reinterpret_cast<AScoreCntr*>(FoundActors[0]);
	}

	ResourceStorage->AddResource(
		Resource->GiveBunch(),
		Resource->GetResourceType()
	);
	ScoreCntr->IncreaseScoreByExtracting(
		Resource->GiveBunch(),
		Resource->GetResourceType()
	);
}
