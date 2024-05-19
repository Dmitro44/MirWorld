// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterMW2D.h"


void ACharacterMW2D::SetAction(int TypeOfAction, AActor* AimPtr)
{
	SelectedAction = static_cast<EActivity>(TypeOfAction);
	SelectedAction_ = TypeOfAction;

	Resource = nullptr;
	switch (SelectedAction) {
	case eMoveTo:
		break;
	case eExtract: // or
	case eMine:
		Resource = reinterpret_cast<AResource*>(AimPtr);
		break;
	default:
		ReportImpossibleTask();
		return;
	}

	bHasTask = true;
	GoTo(AimPtr->GetActorLocation());
}

void ACharacterMW2D::DoAction()
{
	bIsMoving = false;
	switch (SelectedAction)
	{
	case eExtract:
		bIsWorking = true;
		GetWorldTimerManager().SetTimer(
			SubExtractTimerHandle,
			this,
			&ACharacterMW2D::MineResource,
			Resource->ExtractTime(),
			true
		);
		break;
	case eMine:
		RepeatsCntr = 0;
		bIsWorking = true;
		GetWorldTimerManager().SetTimer(
			SubExtractTimerHandle,
			this,
			&ACharacterMW2D::MineResource,
			Resource->MineTime(),
			true
		);
		break;
	case eMoveTo:
		bIsWorking = false;
		bHasTask = false;
		ReportDoneTask();
		break;
	case eBuild:
		// TODO ------------------------------------------------------------------------------------------------------------------------
		break;
	}
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


bool ACharacterMW2D::IsResourceValid(AResource* CheckResource)
{
	return CheckResource != nullptr && CheckResource->GetDoesExist();
}

void ACharacterMW2D::PrepareToResourceTask()
{
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
}

void ACharacterMW2D::MineResource()
{
	++RepeatsCntr;

	PrepareToResourceTask();

	if (!IsResourceValid(Resource)) {
		bIsWorking = false;
		bHasTask = false;
		ReportImpossibleTask();
		return;
	}

	int BunchSize = ( SelectedAction == eExtract ? Resource->ExtractRes() : Resource->GiveBunch() );
	ResourceStorage->AddResource(
		BunchSize,
		Resource->GetResourceType()
	);
	ScoreCntr->IncreaseScoreByExtracting(
		BunchSize,
		Resource->GetResourceType()
	);

	if (RepeatsCntr == RepeatsRequired - 1 || SelectedAction == eExtract) {
		GetWorldTimerManager().ClearTimer(SubExtractTimerHandle);
		bIsWorking = false;
		bHasTask = false;
		ReportDoneTask();
	}
}


void ACharacterMW2D::BeginPlay()
{
	AMobBase2D::BeginPlay();
}