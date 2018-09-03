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

	//	׼��ͼƬ
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrossHairTexture;

	//	׼��ͼƬ�Ŀ�
	UPROPERTY(EditDefaultsOnly)
	float CrossHairWidth;

	//	׼��ͼƬ�ĸ�
	UPROPERTY(EditDefaultsOnly)
	float CrossHairHeight;

public:
	virtual void DrawHUD() override;
	
	
};
