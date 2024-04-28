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
}

