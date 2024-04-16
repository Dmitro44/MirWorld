// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMW.h"

void ACharacterMW::SetAction(int TypeOfAction, TArray<FVector> newTrajectory, AActor* AimPtr) 
{
	///todo set action
	CurrentTrajectory = newTrajectory;

	if (TypeOfAction == static_cast<int>(Extract)) {
		Resource = reinterpret_cast<AResource*>(AimPtr);
		FollowTrajectory();
	}
	else if (TypeOfAction == static_cast<int>(MoveTo)) {
		FollowTrajectory();
	}
	else { // TypeOfAction == Stop
		StopMovement();
	}
}

void ACharacterMW::DoAction()
{

}

void ACharacterMW::reportImpossibleTask()
{

}

void ACharacterMW::reportDoneTask()
{

}

void ACharacterMW::ExtractBunch()
{

}
