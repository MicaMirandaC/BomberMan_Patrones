// Fill out your copyright notice in the Description page of Project Settings.
//ES EL FACADE = FACHADA
#pragma once
#include "EnemigoTerrestre.h"
#include "EnemigoTerrestre2.h"
#include "EnemigoAereo.h"
#include "Enemigo.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoFacade.generated.h"

UCLASS()
class BOMBERMAN_PATRONES_API AEnemigoFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Punteros hacia lso enemigos
	AEnemigoTerrestre* enemigoT1;
	AEnemigoTerrestre2* enemigoT2;
	AEnemigoAereo* enemigoAereo;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Poque no le puse subclases
	//TArray<FString> Tareas;
	TArray<AEnemigo*> Enemigos;

	//Funciones generales 
	void Custodiar();
	void Atacar();

	//Yano porque seran funciones directas y no se dividiran en subfunciones
	//void performTask(TArray<AEnemigo*> _enemigos,
		//TArray<FString> _tareas);
		
//Para que se ejecute uno despues del otro
//private: 
	// TimerHandles para manejar el tiempo entre niveles
	//FTimerHandle TimerHandleAtacar;
};
