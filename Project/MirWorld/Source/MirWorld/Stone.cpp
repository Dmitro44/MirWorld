// Fill out your copyright notice in the Description page of Project Settings.


#include "Stone.h"

AStone::AStone()
{
	PrimaryActorTick.bCanEverTick = false;

	//Create instance of class
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	//Attach it to Root component. It will allow to work with group of tile as one instance
	StaticMeshComponent->SetupAttachment(RootComponent);

	TimeToMine = 4;
	ResorceLeft = FMath::RandRange(75, 125);
	BaseRecieve = 4;
}

//float AStone::TimeRequired()
//{
//	return TimeToMine;
//}
//
//int AStone::GiveBunch()
//{
//	int Mined = FMath::RandRange(BaseRecieve - 1.0, BaseRecieve + 2.5);
//	
//	this->ResorceLeft -= Mined;
//
//	if (ResorceLeft > 0) {
//		return Mined;
//	}
//	else {
//		return 1;
//	}
//}