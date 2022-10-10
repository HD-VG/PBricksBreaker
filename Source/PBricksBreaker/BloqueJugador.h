// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueJugador.generated.h"

UCLASS()
class PBRICKSBREAKER_API ABloqueJugador : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	ABloqueJugador();

public:
	int ancho;
	int alto;
	int velocidad;
public:
	UFUNCTION()
		void mover();
	UFUNCTION()
		void golpear();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
