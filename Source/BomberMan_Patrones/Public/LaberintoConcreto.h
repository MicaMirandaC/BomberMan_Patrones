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
	ALaberintoConcreto();

private:
	class ALaberinto* Laberinto;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ConstruirBloques(TArray<TArray<int32>>& Mapa, int32 TipoBloque, TSubclassOf<AActor> ClaseBloque);
	void ConstruirPuertas(TArray<TArray<int32>>& Mapa, int32 TipoPuerta, TSubclassOf<AActor> ClasePuerta);
	void ConstruirObstaculos(TArray<TArray<int32>>& Mapa, int32 TipoObstaculo, TSubclassOf<AActor> ClaseObstaculo);
	void LaberintoCompleto() override;
};