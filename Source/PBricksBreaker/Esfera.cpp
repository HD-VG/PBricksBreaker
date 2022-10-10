// Fill out your copyright notice in the Description page of Project Settings.


#include "Esfera.h"

// Sets default values
AEsfera::AEsfera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("Se creo una esfera"));

}

void AEsfera::mover()
{
	UE_LOG(LogTemp, Warning, TEXT("la esfera esta en movimiento"));
}

void AEsfera::rebotar()
{
	UE_LOG(LogTemp, Warning, TEXT("esta rebotanto"));
}

// Called when the game starts or when spawned
void AEsfera::BeginPlay()
{
	Super::BeginPlay();
	mover();
}

// Called every frame
void AEsfera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

