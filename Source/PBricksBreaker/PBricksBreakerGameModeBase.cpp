// Copyright Epic Games, Inc. All Rights Reserved.


#include "PBricksBreakerGameModeBase.h"
#include "Esfera.h"

AEsfera* esfera;


void APBricksBreakerGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	CrearEsfera();
	
}

void APBricksBreakerGameModeBase::CrearEsfera()
{
	esfera->mover();
}
