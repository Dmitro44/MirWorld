#pragma once

#include "CoreMinimal.h"

// Refers to impossible ways or trajectories
const TArray<FVector> NO_WAY = { {-1, -1, 0} };

// Refers to the types of resources on a map
enum Resources {
	wood = 0,
	stone,
	food,
	iron,
	gold,
};