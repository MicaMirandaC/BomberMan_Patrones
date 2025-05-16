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
//include "FabricaBloques.h"

ABomberMan_PatronesGameMode::ABomberMan_PatronesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan_PatronesGameMode::BeginPlay()
{
	Super::BeginPlay();

	BuilderLab = GetWorld()->SpawnActor<ALaberintoConcreto>(ALaberintoConcreto::StaticClass());
	Director = GetWorld()->SpawnActor<ADirectorLaberinto>(ADirectorLaberinto::StaticClass());
	Director->EstablecerILaberintoBuilder(BuilderLab);
	Director->ConstruirTodo();
	
	/*
	AFabricaBloques* FabricaBloques = GetWorld()->SpawnActor<AFabricaBloques>(AFabricaBloques::StaticClass());

	// Recorremos la matriz para generar los bloques
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];
			if (valor != 0) // Si no es espacio vacío
			{
				// Calculamos la posición del bloque
				FVector posicionBloque = FVector(
					XInicial + columna * AnchoBloque,
					YInicial + fila * LargoBloque,
					20.0f); // Z queda en 0 (altura del bloque)

				// Llamamos a la función para generar un bloque
				//SpawnBloque(posicionBloque, valor);
				switch (valor)
				{
				case 1: // Madera
					FabricaBloques->CrearBloque("Madera", posicionBloque);
					//SpawnBloque(posicionBloque, 1);
					break;
				case 2: // Ladrillo
					FabricaBloques->CrearBloque("Ladrillo", posicionBloque);
					break;
				case 3: // Concreto
					FabricaBloques->CrearBloque("Concreto", posicionBloque);
					break;
				case 4: // Acero
					FabricaBloques->CrearBloque("Acero", posicionBloque);
					break;
				case 5: // Rotador
					FabricaBloques->CrearBloque("Rotador", posicionBloque);
					break;
				default:
					break;
				}
			}
		}
	}*/
}
/*
void ABomberMan_PatronesGameMode::SpawnBloque(FVector posicion, int32 tipoBloque)
{
	/*
	//ABloque* BloqueGenerado = nullptr;

	ABloque* BloqueGenerado = nullptr;
	// Elegir tipo de bloque basado en el valor
	if (tipoBloque == 5)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueRotador>(ABloqueBurbuja::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Rotador", posicionBloque);
	}
	else if (tipoBloque == 4)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Acero", posicionBloque);
	}
	else if (tipoBloque == 3)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Concreto", posicionBloque);
	}
	else if (tipoBloque == 2)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Ladrillo", posicionBloque);
	}
	else if (tipoBloque == 1)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Madera", posicionBloque);
	}
	else {
		return;
	}
	// Agregar el bloque al TArray si fue generado
	if (BloqueGenerado)
	{
		aBloques.Add(BloqueGenerado);
	}

}

void ABomberMan_PatronesGameMode::DestruirBloque()
{
	/*
	//Seleccionar aleatoriamente un bloque del array ABloques para su eliminacion
	int numeroBloques = aBloques.Num();
	int NumeroAleatorio = FMath::RandRange(1, numeroBloques);

	if (aBloques.Num() > 0)
	{
		BloqueActual = aBloques[NumeroAleatorio]; // Obtén el primer bloque
		if (BloqueActual)
		{
			BloqueActual->Destroy();
			// Realiza operaciones con el bloque
			//primerBloque->SetActorLocation(FVector(100.0f, 100.0f, 100.0f));
		}
	}
}
*/