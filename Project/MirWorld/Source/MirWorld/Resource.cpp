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

	this->ResorceLeft -= Mined;

	if (ResorceLeft > 0) {
		return Mined;
	}
	else {
		return 1;
	}
}

int AResource::ExtractRes()
{
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

void AResource::SetResourceType(int NewType)
{
	if (NewType >= 0 && NewType < RESOURCE_AMNT) {
		ResourceType = NewType;
	}
}
