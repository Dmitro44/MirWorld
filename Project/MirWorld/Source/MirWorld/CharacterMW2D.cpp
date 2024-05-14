// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMW2D.h"

void ACharacterMW2D::SetAction(int TypeOfAction, TArray<FVector> NewTrajectory, AActor* AimPtr)
{
	SetTrajectory(NewTrajectory);
	if (TypeOfAction >= 0 && TypeOfAction < 3) {
		SelectedAction = static_cast<EActivity> (TypeOfAction);
		HasTask = true;
	}
	else {
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

void ACharacterMW2D::DoAction()
{
	if (SelectedAction == eExtract) {
		RepeatsCntr = 0;
		bIsWorking = true;
		GetWorldTimerManager().SetTimer(
			SubExtractTimerHandle,
			this,
			&ACharacterMW2D::ExtractBunch,
			Resource->TimeRequired(),
			true
		);
	}

	SelectedAction = eNone;
	HasTask = false;
}

bool ACharacterMW2D::IsWorking() const
{
	return bIsWorking;
}

int ACharacterMW2D::GetID() const
{
	return ID;
}

void ACharacterMW2D::SetID(int NewID)
{
	if (NewID >= 0) {
		ID = NewID;
	}
}

void ACharacterMW2D::BeginPlay()
{
	AMobBase2D::BeginPlay(); // check
}

void ACharacterMW2D::reportImpossibleTask()
{

}

void ACharacterMW2D::reportDoneTask()
{

}

bool ACharacterMW2D::IsResourceValid(AResource* CheckResource)
{
	return CheckResource != nullptr && CheckResource->GetDoesExist();
}

void ACharacterMW2D::ExtractBunch()
{
	++RepeatsCntr;
	if (RepeatsCntr == RepeatsRequired - 1 || !IsResourceValid(Resource)) {
		GetWorldTimerManager().ClearTimer(SubExtractTimerHandle);
		bIsWorking = false;
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
	
	if (!IsResourceValid(Resource)) {
		return;
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
