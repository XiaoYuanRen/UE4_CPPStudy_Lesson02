// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSHUD.h"
#include "RunTime/Engine/Classes/Engine/Canvas.h"

void AFPSHUD::DrawHUD()
{
	Super::DrawHUD();

	if (CrossHairTexture)
	{
		if (CrossHairWidth == 0)
		{
			CrossHairWidth = CrossHairTexture->GetSurfaceWidth();
			CrossHairHeight = CrossHairTexture->GetSurfaceHeight();
		}

		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
		//FVector2D CrossHairPosition(Center.X - CrossHairTexture->GetSurfaceWidth()*0.5f, Center.Y - CrossHairTexture->GetSurfaceHeight()*0.5f);
		FVector2D CrossHairPosition(Center.X - CrossHairWidth * 0.5f, Center.Y - CrossHairHeight * 0.5f);

		FCanvasTileItem TileItem(CrossHairPosition, CrossHairTexture->Resource, FColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		TileItem.Size = FVector2D(CrossHairWidth, CrossHairHeight);
		Canvas->DrawItem(TileItem);
	}

}
