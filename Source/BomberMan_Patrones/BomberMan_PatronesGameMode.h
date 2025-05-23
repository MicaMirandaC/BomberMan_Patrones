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

public:
	virtual void BeginPlay() override;

private:

	//El actor constructor
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ADirectorLaberinto* DirectorLab;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ALaberintoConcreto* BuilderLab;


public:
	//PROTOTYPE
	//UPROPERTY(EditAnywhere)
	//AActor* BloquePrototype;
};