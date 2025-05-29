// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPrototype.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIPrototype : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_PATRONES_API IIPrototype
{
	GENERATED_BODY()

public:
	//Clona un bloque con una posición y rotación específica.
	virtual AActor* Clonar(FVector Pos, FRotator Rot) = 0;
	
	
	
	
	//Funcion para ajustes personalizados del clon
	//virtual void Configurar(FString Nombre) = 0;
};
