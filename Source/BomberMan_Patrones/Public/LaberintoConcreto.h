// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Laberinto.h"
#include "LaberintoConcreto.generated.h"
UCLASS()
class BOMBERMAN_PATRONES_API ALaberintoConcreto : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	//ESTE ES EL BUILDER
	ALaberintoConcreto();

private:
	//Es un puntero a un objeto de la clase ALaberinto
	class ALaberinto* Laberinto;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	virtual ALaberinto* GetLaberinto() override;
public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Constructor de laberinto

	void ConstruirBloques() override;
	void ConstruirPuertas() override;
	void ConstruirObstaculos() override;
	void ConstruirMuros() override;
	
	//TMap: Asocia los numeros enteros con las subclases derivadas de actor
	// Mapeos para cada tipo
	//Esto tiene que estar aqui porque como este construye necesita saber que tipo de bloque es
	TMap<int32, TSubclassOf<AActor>> MapaDeBloques;
	TMap<int32, TSubclassOf<AActor>> MapaDePuertas;
	TMap<int32, TSubclassOf<AActor>> MapaDeObstaculos;
};