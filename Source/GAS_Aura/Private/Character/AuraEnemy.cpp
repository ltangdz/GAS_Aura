// Copyright by wanf2004


#include "Character/AuraEnemy.h"

void AAuraEnemy::HighlightActor()
{
	bIsHighlighted = true;
	UE_LOG(LogTemp, Warning, TEXT("Highlight Actor"));
}

void AAuraEnemy::UnHighlightActor()
{
	bIsHighlighted = false;
	UE_LOG(LogTemp, Warning, TEXT("UnHighlight Actor"));
}