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

int AResource::GetResourceType() const
{
	return ResourceType;
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

void AResource::SetResourceType(int NewType)
{
	if (NewType >= 0 && NewType < RESOURCE_AMNT) {
		ResourceType = NewType;
	}
}
