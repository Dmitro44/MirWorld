// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicActor.h"

ABasicActor::ABasicActor()
{
 	PrimaryActorTick.bCanEverTick = false;
}

void ABasicActor::SetInfo(FBlankObjectInfo NewObjectInfo)
{
	ObjectInfo = NewObjectInfo;
}

void ABasicActor::BeginPlay()
{
	Super::BeginPlay();
	
}

