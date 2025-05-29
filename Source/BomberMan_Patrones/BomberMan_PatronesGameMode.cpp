// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_PatronesGameMode.h"
#include "BomberMan_PatronesCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Laberinto.h"
#include "ILaberintoBuilder.h"
#include "DirectorLaberinto.h"
#include "LaberintoConcreto.h"
#include "IPrototype.h"
#include "BloqueEspecial.h"
#include "EnemigoFacade.h"

ABomberMan_PatronesGameMode::ABomberMan_PatronesGameMode()
{
	PrimaryActorTick.bCanEverTick = true;

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
	
	DirectorLab->ConstruirLaberinto();	
	
	ALaberinto* Laberinto = DirectorLab->GetLaberinto();

	//PROTOTYPE
	
	// Crear un bloque base (el prototipo)
	BloqueBase = GetWorld()->SpawnActor<ABloqueEspecial>();


	// Clonar múltiples veces
	for (int32 i = 0; i < 5; i++)
	{
		FVector Pos = FVector(300.f * (i + 1), 0.f, 0.f);
		FRotator Rot = FRotator::ZeroRotator;

		AActor* NuevoBloque = BloqueBase->Clonar(Pos, Rot);

		if (ABloqueEspecial* Clon = Cast<ABloqueEspecial>(NuevoBloque))
		{
			Clon->Configurar(FString::Printf(TEXT("Bloque_%d"), i + 1));
		}
	}

	//Facade
	auto Facade = GetWorld()->SpawnActor<AEnemigoFacade>();

	Facade->Custodiar();

	FTimerHandle Timer;
	GetWorld()->GetTimerManager().SetTimer(Timer, [=]()
		{
			Facade->Atacar();
		}, 3.0f, false);
}
	
	