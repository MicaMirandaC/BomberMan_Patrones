// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_PATRONES_API ABloqueLadrillo : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueLadrillo();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override; //funcion de movimento
};
