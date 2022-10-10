// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Esfera.generated.h"

UCLASS()
class PBRICKSBREAKER_API AEsfera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEsfera();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int ancho;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int alto;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int posicionX;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int posicionY;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int velocidad;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int direccion;

//funciones - metodos
	UFUNCTION()
		void mover();
	UFUNCTION()
		void rebotar();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
