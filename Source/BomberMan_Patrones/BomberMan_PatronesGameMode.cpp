// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_PatronesGameMode.h"
#include "BomberMan_PatronesCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Laberinto.h"
#include "ILaberintoBuilder.h"
#include "DirectorLaberinto.h"
#include "LaberintoConcreto.h"
#include "IPrototype.h"
//#include "BloqueEspecial.h"
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

	//Le dices al Director qué Builder va a usar

	DirectorLab->EstablecerILaberintoBuilder(BuilderLab);
	
	DirectorLab->ConstruirLaberinto();	
	//Obtener el laberinto construido por el Director
	ALaberinto* Laberinto = DirectorLab->GetLaberinto();

	//PROTOTYPE
	/*
	// Crea el bloque base, para que sea visible en el mundo
	FVector PosBase = FVector(0.f, 0.f, 100.f);
	FRotator RotBase = FRotator::ZeroRotator;

	BloqueBase = GetWorld()->SpawnActor<ABloqueEspecial>(ABloqueEspecial::StaticClass(), PosBase, RotBase);
	//Si el bloque se creo correctamente se crearan clones
	if (BloqueBase)
	{
		// Solo se encarga de indicar cuántos clones y sus posiciones
		for (int32 i = 0; i < 5; i++)
		{
			FVector PosClon = FVector(300.f * (i + 1), 0.f, 0.f);
			BloqueBase->Clonar(PosClon, RotBase);
		}
	}*/


	//Facade
	AEnemigoFacade* MiFachada = GetWorld()->SpawnActor<AEnemigoFacade>();
	MiFachada->InicializarEnemigos();

	// Hacer patrullar en nivel 1
	//MiFachada->Nivel1();
	MiFachada->Nivel2();

}
	
//PROTOYPE CON LA CONFIGURACION
/*
if (ABloqueEspecial* Clon = Cast<ABloqueEspecial>(NuevoBloque))
		{
			Clon->Configurar(FString::Printf(TEXT("Bloque_%d"), i + 1));
		}
*/