// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_PatronesGameMode.h"
#include "BomberMan_PatronesCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "Laberinto.h"
#include "ILaberintoBuilder.h"
#include "DirectorLaberinto.h"
#include "LaberintoConcreto.h"
#include "IPrototype.h"
#include "BloqueClone.h"
//include "FabricaBloques.h"

ABomberMan_PatronesGameMode::ABomberMan_PatronesGameMode()
{
	//PrimaryActorTick.bCanEverTick = true;

	//set default pawn class to our Blueprinted character;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan_PatronesGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Spawn del Builder (LaberintoConcreto)
	BuilderLab = GetWorld()->SpawnActor<ALaberintoConcreto>(ALaberintoConcreto::StaticClass());

	// Spawn del Director
	DirectorLab = GetWorld()->SpawnActor<ADirectorLaberinto>(ADirectorLaberinto::StaticClass());

	DirectorLab->EstablecerILaberintoBuilder(BuilderLab);
	
	ALaberinto* Laberinto = DirectorLab->GetLaberinto();
	
	//Director->ConstruirTodo();
	
//PROTOTYPE
	//Lo caste porque clon esta en la interfas y no en el bloque
	/*
	if (!BloquePrototype)
	{
		UE_LOG(LogTemp, Error, TEXT("BloquePrototype es nullptr, no se puede clonar"));
		return; // Salir si el prototipo no existe
	}

	if (IIPrototype* Prototype = Cast<IIPrototype>(BloquePrototype))
	{
		UE_LOG(LogTemp, Warning, TEXT("BloquePrototype es válido, comenzando la clonación"));

		for (int x = 0; x < 5; ++x)
		{
			FVector Location = FVector(x * 200.f, 0.f, 100.f); // Ajuste en Z para que sea visible
			UE_LOG(LogTemp, Warning, TEXT("Intentando clonar bloque en posición X: %d"), x);

			AActor* Clon = Prototype->Clone(Location, FRotator::ZeroRotator);

			if (Clon)
			{
				UE_LOG(LogTemp, Warning, TEXT("Bloque clonado exitosamente en %s"), *Location.ToString());
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Falló la clonación del bloque"));
			}

	}
	if (IIPrototype* Prototype = Cast<IIPrototype>(BloquePrototype))
	{
		for (int x = 0; x < 5; ++x)
		{
			FVector Location = FVector(x * 200.f, 0.f, 0.f);
			Prototype->Clone(Location, FRotator::ZeroRotator);
		}
	}*/
}
	
	