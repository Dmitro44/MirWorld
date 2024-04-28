// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMW.h"

void ACharacterMW::SetAction(int TypeOfAction, TArray<FVector> NewTrajectory, AActor* AimPtr) 
{
	SetTrajectory(NewTrajectory);
	if (TypeOfAction >= 0 && TypeOfAction < 3) {
		SelectedAction = static_cast<EActivity> (TypeOfAction);
		HasTask = true;
	} else {
		SelectedAction = eNone;
		HasTask = false;
	}

	Resource = nullptr;
	switch (SelectedAction) {
		case eExtract:
			Resource = reinterpret_cast<AResource*>(AimPtr);
			FollowTrajectory();
			break;
		case eMoveTo:
			FollowTrajectory();
			break;
		case eStop:
			StopMovement();
			SelectedAction = eNone;
			HasTask = false;
			break;
	}
}

void ACharacterMW::DoAction()
{
	if (SelectedAction == eExtract) {
		RepeatsCntr = 0;
		GetWorldTimerManager().SetTimer(
			SubExtractTimerHandle,
			this,
			&ACharacterMW::ExtractBunch,
			Resource->TimeRequired(),
			true
		);
	}

	SelectedAction = eNone;
	HasTask = false;
}

void ACharacterMW::BeginPlay()
{
	AMobBase::BeginPlay(); // check
}

void ACharacterMW::reportImpossibleTask()
{

}

void ACharacterMW::reportDoneTask()
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
