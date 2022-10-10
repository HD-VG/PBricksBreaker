// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueJugador.h"


// Sets default values
ABloqueJugador::ABloqueJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueJugador::mover()
{

}

void ABloqueJugador::golpear()
{

}


