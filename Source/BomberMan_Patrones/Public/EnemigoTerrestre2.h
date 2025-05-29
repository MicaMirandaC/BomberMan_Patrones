// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre2.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_PATRONES_API AEnemigoTerrestre2 : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoTerrestre2();

public:
	virtual void Custodia() override;
	virtual void Ataca() override;
	
	virtual FString NombreDelEnemigo() override;
};
