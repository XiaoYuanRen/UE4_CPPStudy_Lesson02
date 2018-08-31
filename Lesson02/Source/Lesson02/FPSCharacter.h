// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Bullet.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "FPSCharacter.generated.h"

UCLASS()
class LESSON02_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;

	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* FPSMesh;

	UPROPERTY(EditAnywhere, Category = "GamePlay")
		FVector MuzzleOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<class ABullet> ProjectileClass;
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void MoveForward(float value);

	UFUNCTION()
		void MoveRight(float value);

	UFUNCTION()
		void JumpStart();

	UFUNCTION()
		void JumpStop();

	UFUNCTION()
		void Fire();
	
};
