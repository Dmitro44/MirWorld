// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerPawn.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ASPlayerPawn::ASPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the components
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;
	
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 2000.0f;
	SpringArmComponent->bDoCollisionTest = false;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetProjectionMode(ECameraProjectionMode::Orthographic); /// added for better image -------------------------------
	/// поменял режим с перспективы по умолчанию на ортогональный. Теперь расстояние до точки не играет роли для отрисовки (или типа того, но перспективы теперь нет)
	CameraComponent->SetupAttachment(SpringArmComponent);
}

// Called when the game starts or when spawned
void ASPlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	// Set the initial target location and zoom
	TargetLocation = GetActorLocation();
	TargetZoom = 3000.0f;

	// Rotate the spring arm to face the ground
	const FRotator Rotation = SpringArmComponent->GetRelativeRotation();
	SpringArmComponent->SetRelativeRotation(FRotator(Rotation.Pitch + -90, Rotation.Yaw, 0.0f));
}

void ASPlayerPawn::Forward(float AxisValue)
{
	if (AxisValue == 0.0f)
	{
		return;
	}

	// Calculate the adjusted move speed based on the current zoom level
	float adjustedMoveSpeed = moveSpeed * (SpringArmComponent->TargetArmLength / MaxZoom);
	TargetLocation = (SpringArmComponent->GetForwardVector() + SpringArmComponent->GetUpVector()) * AxisValue * adjustedMoveSpeed + TargetLocation;
}

void ASPlayerPawn::Right(float AxisValue)
{
	if (AxisValue == 0.0f)
	{
		return;
	}

	// Calculate the adjusted move speed based on the current zoom level
	float adjustedMoveSpeed = moveSpeed * (SpringArmComponent->TargetArmLength / MaxZoom);
	TargetLocation = SpringArmComponent->GetRightVector() * AxisValue * adjustedMoveSpeed + TargetLocation;
}

void ASPlayerPawn::Zoom(float AxisValue)
{
	if (AxisValue == 0.0f)
	{
		return;
	}

	const float Zoom = AxisValue * 100.f;
	TargetZoom = FMath::Clamp(Zoom + TargetZoom, MinZoom, MaxZoom);
}

// Called every frame
void ASPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Calculate the boundary based on the current zoom level
	FVector MinBoundary = FVector(CameraBoundsMin, CameraBoundsMin, 0);
	FVector MaxBoundary = FVector(CameraBoundsMax, CameraBoundsMax, 0);

	// // Calculate the offset of the camera from the center of the visible area
	// float cameraOffsetX = TargetZoom * FMath::Tan(FMath::DegreesToRadians(CameraComponent->FieldOfView / 2.0f)) * CameraComponent->AspectRatio;
	// float cameraOffsetY = TargetZoom * FMath::Tan(FMath::DegreesToRadians(CameraComponent->FieldOfView / 2.0f));
	//
	// // Adjust the maximum and minimum boundaries to ensure that the edges of the visible area do not go beyond the map border
	// MaxBoundary.X -= cameraOffsetX;
	// MinBoundary.X += cameraOffsetX;
	// MaxBoundary.Y -= cameraOffsetY;
	// MinBoundary.Y += cameraOffsetY;

	// Clamp the target location within the boundary
	TargetLocation.X = FMath::Clamp(TargetLocation.X, MinBoundary.X, MaxBoundary.X);
	TargetLocation.Y = FMath::Clamp(TargetLocation.Y, MinBoundary.Y, MaxBoundary.Y);
	TargetLocation.Z = FMath::Clamp(TargetLocation.Z, MinBoundary.Z, MaxBoundary.Z);
	CameraComponent->SetOrthoWidth(TargetZoom); /// added ----------------------------------------------
	/// угол обзора. Можно представлять, как высоту, но это не она, конечно

	// Move the pawn in the desired location
	const FVector InterpolatedLocation = UKismetMathLibrary::VInterpTo(GetActorLocation(), TargetLocation, DeltaTime, moveSpeed);
	SetActorLocation(InterpolatedLocation);

	// Zoom the camera to the desired zoom level
	const float InterpolatedZoom = UKismetMathLibrary::FInterpTo(SpringArmComponent->TargetArmLength, TargetZoom, DeltaTime, zoomSpeed);
	SpringArmComponent->TargetArmLength = InterpolatedZoom;
}

// Called to bind functionality to input
void ASPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &ASPlayerPawn::Forward);
	PlayerInputComponent->BindAxis("Right", this, &ASPlayerPawn::Right);
	PlayerInputComponent->BindAxis("Zoom", this, &ASPlayerPawn::Zoom);
}

