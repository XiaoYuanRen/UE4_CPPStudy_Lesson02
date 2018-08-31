// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSGameMode.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

void AFPSGameMode::BeginPlay()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("This is FPSGameMode"));
	}
}
