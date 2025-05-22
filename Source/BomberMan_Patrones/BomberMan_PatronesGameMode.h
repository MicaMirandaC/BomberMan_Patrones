// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan_PatronesGameMode.generated.h"

class ABloque; class AFabricaBloques;

UCLASS(minimalapi)
class ABomberMan_PatronesGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_PatronesGameMode();

private:

	//El actor constructor
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ADirectorLaberinto* Director;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ALaberintoConcreto* Builder;

	// Referencia al laberinto construido
	class ALaberinto* Laberinto;

public:
	virtual void BeginPlay() override;

public:
	//PROTOTYPE
	UPROPERTY(EditAnywhere)
	AActor* BloquePrototype;
};