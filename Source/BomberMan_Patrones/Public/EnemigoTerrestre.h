// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_PATRONES_API AEnemigoTerrestre : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoTerrestre();

public:
	// Sobrescribimos las funciones virtuales
	virtual void Patrullar() override;
	virtual void Atacar() override;

	virtual FString NombreDelEnemigo() override;
};
