// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RunTime/Engine/Public/CanvasItem.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class LESSON02_API AFPSHUD : public AHUD
{
	GENERATED_BODY()

	//	准心图片
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrossHairTexture;

	//	准心图片的宽
	UPROPERTY(EditDefaultsOnly)
	float CrossHairWidth;

	//	准心图片的高
	UPROPERTY(EditDefaultsOnly)
	float CrossHairHeight;

public:
	virtual void DrawHUD() override;
	
	
};
