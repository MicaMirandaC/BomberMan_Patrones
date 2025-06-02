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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	
	TArray<AEnemigo*> Enemigos;

	//Funciones para gestionar a los enemigos
	void AgregarEnemigo(AEnemigo* enemigo);
	void InicializarEnemigos();

	//Funciones generales 
	void Nivel1();//Patrullar
	void Nivel2();//Atacar

};
