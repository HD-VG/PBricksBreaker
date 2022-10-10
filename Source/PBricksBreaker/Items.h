// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items.generated.h"


UCLASS()
class PBRICKSBREAKER_API AItems : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	AItems();

public:
	int alto;
	int ancho;
	int tipo;
	int visible;

public:

	UFUNCTION()
		void mostrase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
