// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

UCLASS()
class PBRICKSBREAKER_API ABomba : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	ABomba();

public:
	int dimenciones;
	int rago;
	int posicionX;
	int posicionY;
public:
	UFUNCTION()
		void explotar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
