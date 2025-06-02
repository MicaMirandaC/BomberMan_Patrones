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
	//Las funciones virtuales puras

	virtual void ConstruirMuros() = 0;
	virtual void GenerandoMitadDerecha() = 0;
	virtual void ConstruirMitadDerecha() = 0;
	virtual void ClonarMitadIzquierda() = 0;
	virtual class ALaberinto* GetLaberinto() = 0;
};
