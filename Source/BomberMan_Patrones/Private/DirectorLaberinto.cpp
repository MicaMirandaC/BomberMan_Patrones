// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorLaberinto.h"
#include "Laberinto.h"

// Sets default values
ADirectorLaberinto::ADirectorLaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorLaberinto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorLaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorLaberinto::EstablecerILaberintoBuilder(IILaberintoBuilder* _Builder)
{
	LaberintoBuilder = _Builder;
}

void ADirectorLaberinto::ConstruirTodo()
{
	if (LaberintoBuilder)
	{
		LaberintoBuilder->LaberintoCompleto();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder no asignado"));
	}
}
/*
void ADirectorLaberinto::ConstruirPuertas()
{
}

void ADirectorLaberinto::ConstruirObstaculos()
{
}

void ADirectorLaberinto::LaberintoCompleto()
{
}*/



