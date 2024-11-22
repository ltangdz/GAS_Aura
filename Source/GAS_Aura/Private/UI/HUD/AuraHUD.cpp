// Copyright by wanf2004


#include "UI/HUD/AuraHUD.h"


void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();

    UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
}
