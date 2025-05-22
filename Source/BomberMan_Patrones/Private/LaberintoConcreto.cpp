// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoConcreto.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueMov.h"
#include "BloqueRotador.h"
#include "Obstaculo.h"
#include "Puerta.h"
#include "Laberinto.h"

// Sets default values
ALaberintoConcreto::ALaberintoConcreto()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

	// Agregar tipos de bloques al mapa
	// Mapeo tipo clase de bloque
	MapaDeBloques.Add(1, ABloqueMadera::StaticClass());
	MapaDeBloques.Add(2, ABloqueConcreto::StaticClass());
	MapaDeBloques.Add(3, ABloqueLadrillo::StaticClass());
	MapaDeBloques.Add(4, ABloqueAcero::StaticClass());
	MapaDeBloques.Add(5, ABloqueRotador::StaticClass());
	MapaDeBloques.Add(6, ABloqueMov::StaticClass());
	

	MapaDeObstaculos.Add(7, AObstaculo::StaticClass());

	MapaDePuertas.Add(8, APuerta::StaticClass());

}

// Called when the game starts or when spawned
void ALaberintoConcreto::BeginPlay()
{
    Super::BeginPlay();

	Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());

	ConstruirMuros();
	ConstruirBloques();
	ConstruirObstaculos();
	ConstruirPuertas();
}

// Called every frame
void ALaberintoConcreto::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ALaberintoConcreto::ConstruirMuros()
{
	if (!Laberinto) return;
	for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];
			//Para verificar si un objeto, valor o clave está presente dentro de una colección
			if (Tipo == 4 && MapaDeBloques.Contains(Tipo))
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeBloques[Tipo], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::ConstruirBloques()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];

			if (Tipo != 0 && Tipo != 4 && Tipo != 7 && Tipo != 8)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeBloques[Tipo], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::ConstruirPuertas()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaPuertas.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaPuertas[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaPuertas[i][j];

			if (Tipo == 8 && Tipo != 0)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDePuertas[8], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::ConstruirObstaculos()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaObstaculos.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaObstaculos[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaObstaculos[i][j];

			if (Tipo == 7 && Tipo !=0)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeObstaculos[7], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}
ALaberinto* ALaberintoConcreto::GetLaberinto()
{
	return Laberinto;
}

