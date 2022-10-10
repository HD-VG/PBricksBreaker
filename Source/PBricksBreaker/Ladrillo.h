// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class PBRICKSBREAKER_API ALadrillo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALadrillo();
public:
	int ancho;
	int alto;
	int dureza;
public:
	UFUNCTION()
		void mostrarse();
	UFUNCTION()
		void destruir();
	UFUNCTION()
		void ocular();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
