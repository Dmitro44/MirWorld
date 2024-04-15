// Fill out your copyright notice in the Description page of Project Settings.


#include "Tree.h"

ATree::ATree()
{
	PrimaryActorTick.bCanEverTick = false;

	//Create instance of class
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	//Attach it to Root component. It will allow to work with group of tile as one instance
	StaticMeshComponent->SetupAttachment(RootComponent);

	TimeToMine = 3;
	ResorceLeft = FMath::RandRange(75, 125);
	BaseRecieve = 2;
}

//float ATree::TimeRequired()
//{
//	return TimeToMine;
//}
//
//int ATree::GiveBunch()
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
