// Copyright by wanf2004

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EmenyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEmenyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GAS_AURA_API IEmenyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;
};
