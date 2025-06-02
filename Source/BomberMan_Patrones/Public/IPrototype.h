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
	//UWorld* Mundo: el mundo donde se va a clonar el actor, posicion para lo que indica su nombre
	virtual AActor* Clonar(UWorld* Mundo, FVector Destino) = 0;


};
