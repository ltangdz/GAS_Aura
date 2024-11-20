// Copyright by wanf2004

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction\EmenyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class GAS_AURA_API AAuraEnemy : public AAuraCharacterBase, public IEmenyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	/* Enemy Interface */
	void HighlightActor() override;
	void UnHighlightActor() override;
	/* end Enemy Interface */

protected:
	virtual void BeginPlay() override;
};
