// Fill out your copyright notice in the Description page of Project Settings.


#include "Resource.h"

float AResource::TimeRequired()
{
	return TimeToMine;
}

int AResource::GiveBunch()
{
	int Mined = FMath::RandRange(BaseRecieve - 1.0, BaseRecieve + 2.5);

	this->ResorceLeft -= Mined;

	if (ResorceLeft > 0) {
		return Mined;
	}
	else {
		return 1;
	}
}
