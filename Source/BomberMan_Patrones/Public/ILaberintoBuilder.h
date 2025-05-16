// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ILaberintoBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UILaberintoBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_PATRONES_API IILaberintoBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Funciones para construir el laberinto
	virtual void ConstruirBloques(TArray<TArray<int32>>& Mapa, int32 TipoBloque, TSubclassOf<AActor> ClaseBloque) = 0;
	virtual void ConstruirPuertas(TArray<TArray<int32>>& Mapa, int32 TipoPuerta, TSubclassOf<AActor> ClasePuerta) = 0;
	virtual void ConstruirObstaculos(TArray<TArray<int32>>& Mapa, int32 TipoObstaculo, TSubclassOf<AActor> ClaseObstaculo) = 0;
	//Funciones para obtener el laberinto
	virtual void LaberintoCompleto() = 0;
};
