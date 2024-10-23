#include "Resource.h"

float AResource::MineTime()
{
	return TimeToMine;
}

float AResource::ExtractTime()
{
	return TimeToExtract;
}

void AResource::SetExtractTime(float NewTime)
{
	if (NewTime > 0) {
		TimeToExtract = NewTime;
	}
}

void AResource::SetMineTime(float NewTime)
{
	if (NewTime > 0) {
		TimeToMine = NewTime;
	}
}

int AResource::GiveBunch()
{
	int Mined = FMath::RandRange(BaseRecieve - 1.0, BaseRecieve + 2.5);

	if (Mined <= ResorceLeft) {
		ResorceLeft -= Mined;
		return Mined;
	}
	else if (ResorceLeft != 0) {
		Mined = ResorceLeft;
		ResorceLeft = 0;
		return Mined;
	}
	else {
		return Mined;
	}
}

int AResource::ExtractRes()
{
	SetActorLocation( {-1000, -1000, -1000} );
	bDoesExist = false;
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);
	return BaseRecieve * 3 > ResorceLeft ? BaseRecieve * 3 : ResorceLeft;
}

int AResource::GetResourceType() const
{
	return ResourceType;
}

int AResource::GetResourceLeft() const
{
	return ResorceLeft;
}

void AResource::SetResourceLeft(int NewResourseLeft)
{
	ResorceLeft = NewResourseLeft;
}

int AResource::GetBiomeType() const
{
	return BiomeType;
}

void AResource::SetBiomeType(int Newtype)
{
	if (Newtype >= 0 && Newtype < BIOME_AMNT) {
		BiomeType = Newtype;
	}
}

bool AResource::GetDoesExist() const
{
	return bDoesExist;
}

void AResource::SetDoesExist(bool bNewStatus)
{
	bDoesExist = bNewStatus;
}

void AResource::SetRandomGenerationNum(int Num)
{
	RandomGenerationNum = Num;
}

int AResource::GetRandomGenerationNum() const
{
	return RandomGenerationNum;
}

int AResource::IsPassable() const
{
	return bIsPassable;
}

void AResource::SetResourceType(int NewType)
{
	if (NewType >= 0 && NewType < RESOURCE_AMNT) {
		ResourceType = NewType;
	}
}
