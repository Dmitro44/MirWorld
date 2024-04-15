// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicActor.generated.h"

USTRUCT(BlueprintType)
struct FBlankObjectInfo
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int X{};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int Y{};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int Z{};

	FBlankObjectInfo() = default;
	FBlankObjectInfo(int const NewX, int const NewY, int const NewZ) : X(NewX), Y(NewY), Z(NewZ)
	{

	}
};

UCLASS()
class WORKUPTUESDAY_API ABasicActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ABasicActor();

	void SetInfo(FBlankObjectInfo NewObjectInfo);

protected:
	virtual void BeginPlay() override;

	// Component that can be attached to actors to render static meshes. 
	// Commonly used to render static geometry in the game world.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	TObjectPtr<UStaticMeshComponent> StaticMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Config", meta = (AllowPrivateAccess = true))
	FBlankObjectInfo ObjectInfo;
};
