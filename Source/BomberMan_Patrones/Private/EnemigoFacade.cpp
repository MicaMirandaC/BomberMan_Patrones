// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFacade.h"

// Sets default values
AEnemigoFacade::AEnemigoFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//INICIALIZAMOA el contenedor de forma implicita
	//Inicializamos los diferentes contenedores
	//Enemigos = TArray<AEnemigo*>();
	//Tareas = TArray<FString>();
}

// Called when the game starts or when spawned
void AEnemigoFacade::BeginPlay()
{
	Super::BeginPlay();

	//Spawnwas enemigos
	enemigoT1 = GetWorld()->SpawnActor<AEnemigoTerrestre>
		(AEnemigoTerrestre::StaticClass());
	enemigoT2 = GetWorld()->SpawnActor<AEnemigoTerrestre2>
		(AEnemigoTerrestre2::StaticClass());
	enemigoAereo = GetWorld()->SpawnActor<AEnemigoAereo>
		(AEnemigoAereo::StaticClass());
	
	//Añadiendo al array 
	Enemigos.Add(enemigoT1);
	Enemigos.Add(enemigoT2);
	Enemigos.Add(enemigoAereo);
}

// Called every frame
void AEnemigoFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigoFacade::Custodiar()
{
	UE_LOG(LogTemp, Warning, TEXT("=== FUNCION 1 INICIADO ==="));
	//Para cada elemento (Enemigo) dentro del arreglo Enemigos, el auto detecta automaticamente el tipo de enemigo aqui es un AEnemigo 
	for (auto Enemigo : Enemigos)
	{
		Enemigo->Custodia();
	}

}

void AEnemigoFacade::Atacar()
{
	UE_LOG(LogTemp, Warning, TEXT("=== FUNCION 1 INICIADO ==="));
	for (auto Enemigo : Enemigos)
	{
		Enemigo->Ataca();
	}
}








/*
void AEnemigoFacade::performTask(TArray<AEnemigo*> _enemigos, TArray<FString> _tareas)
{
}

//Tareas.Empty();
	Tareas.Add("Patrullar");

	performTask(Enemigos, Tareas);*/