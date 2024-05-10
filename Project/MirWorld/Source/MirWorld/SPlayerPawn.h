// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "SPlayerPawn.generated.h"


/**
 * Default pawn that handles the camera and clicks
 */
UCLASS()
class MIRWORLD_API ASPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASPlayerPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void Forward(float AxisValue);

	UFUNCTION()
	void Right(float AxisValue);

	UFUNCTION()
	void Zoom(float AxisValue);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float moveSpeed = 40.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float zoomSpeed = 2.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float MinZoom = 500.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float MaxZoom = 8000.0f; /// changed ----------------------------------------------------------------------

private:	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneComponent;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;

	UPROPERTY()
	FVector TargetLocation;
	
	UPROPERTY()
	float TargetZoom;

	const float CameraBoundsMin = 0;
	const float CameraBoundsMax = 5000.0f;
};
