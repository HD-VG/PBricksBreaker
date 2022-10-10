// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PBricksBreakerGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PBRICKSBREAKER_API APBricksBreakerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
    
	UFUNCTION()
        void CrearEsfera();
};
