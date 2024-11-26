// Copyright by wanf2004


#include "AbilitySystem/AuraAbilitySystemComponent.h"

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAuraAbilitySystemComponent::EffectApplied);
}

void UAuraAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* AbilitySystemComponent,
                                                const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle EffectHandle)
{
	// OnGameplayEffectAppliedDelegateToSelf.Broadcast(AbilitySystemComponent, EffectSpec, EffectHandle);
	GEngine->AddOnScreenDebugMessage(1, 8.f, FColor::Blue, "Effect Applied");
}
