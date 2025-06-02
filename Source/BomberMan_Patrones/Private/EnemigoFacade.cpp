// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFacade.h"

// Sets default values
AEnemigoFacade::AEnemigoFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemigoFacade::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemigoFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigoFacade::AgregarEnemigo(AEnemigo* enemigo)
{
	// Verifica si el enemigo no es nulo antes de agregarlo
	if (enemigo)
	{
		Enemigos.Add(enemigo);//Añade todos los enemigos
	}
}

void AEnemigoFacade::InicializarEnemigos()
{
	// Crear Terrestre
	AEnemigoTerrestre* T1 = GetWorld()->SpawnActor<AEnemigoTerrestre>();
	(AEnemigoTerrestre::StaticClass());
	AgregarEnemigo(T1);

	// Crear Terrestre2
	AEnemigoTerrestre2* T2 = GetWorld()->SpawnActor<AEnemigoTerrestre2>();
	(AEnemigoTerrestre2::StaticClass());
	AgregarEnemigo(T2);

	// Crear Aéreo
	AEnemigoAereo* A1 = GetWorld()->SpawnActor<AEnemigoAereo>();
	(AEnemigoAereo::StaticClass());
	AgregarEnemigo(A1);
}//OJO aqui podria haber un error por el static

void AEnemigoFacade::Nivel1()
{
	for (AEnemigo* enemigo : Enemigos)
	{
		if (enemigo)
		{
			enemigo->Patrullar();
		}
	}
}

void AEnemigoFacade::Nivel2()
{
	for (AEnemigo* enemigo : Enemigos)
	{
		if (enemigo)
		{
			enemigo->Atacar();
		}
	}
}


/*
void AEnemigoFacade::AgregarEnemigo(AEnemigo* enemigo)
{
}

void AEnemigoFacade::InicializarEnemigos()
{
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

*/ 






/*
void AEnemigoFacade::performTask(TArray<AEnemigo*> _enemigos, TArray<FString> _tareas)
{
}

//Tareas.Empty();
	Tareas.Add("Patrullar");

	performTask(Enemigos, Tareas);*/