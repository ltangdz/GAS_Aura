// Copyright by wanf2004


#include "UI/HUD/AuraHUD.h"

#include "Components/WidgetComponent.h"

/*
 *  Set pointer OverlayWidgetController and return the reference of this.
 */
UOverlayWidgetController* AAuraHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (OverlayWidgetController == nullptr)
	{
		OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetControllerClass);
		OverlayWidgetController->SetWidgetControllerParams(WCParams);
		OverlayWidgetController->BindCallbacksOnDependencies();
	}
	return OverlayWidgetController;
}

void AAuraHUD::InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	checkf(OverlayWidgetClass, TEXT("OverlayWidgetClass uninitialized, please fill out BP_AuraHUD."));
	checkf(OverlayWidgetControllerClass, TEXT("OverlayWidgetControllerClass uninitialized, please fill out BP_AuraHUD."));

	// Create OverlayWidget
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	OverlayWidget = Cast<UAuraUserWidget>(Widget);	// Set OverlayWidget

	// Construct FWidgetControllerParams
	const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);

	// Set 2 pointers
	// OverlayWidgetController = GetOverlayWidgetController(WidgetControllerParams);	// Wrong! We want to get a new pointer
	UOverlayWidgetController* WidgetController = GetOverlayWidgetController(WidgetControllerParams);
	// OverlayWidget->SetWidgetController(OverlayWidgetController);
	OverlayWidget->SetWidgetController(WidgetController);

	WidgetController->BroadcastInitialValues();

	// Add to viewport
	// OverlayWidget->AddToViewport();
	Widget->AddToViewport();
}