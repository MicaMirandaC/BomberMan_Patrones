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

}

// Called when the game starts or when spawned
void ALaberintoConcreto::BeginPlay()
{
    Super::BeginPlay();

    Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());

}

// Called every frame
void ALaberintoConcreto::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ALaberintoConcreto::ConstruirBloques(TArray<TArray<int32>>& Mapa, int32 TipoBloque, TSubclassOf<AActor> ClaseBloque)
{
    if (!Laberinto) return;

    for (int32 i = 0; i < Mapa.Num(); i++)
    {
        for (int32 j = 0; j < Mapa[i].Num(); j++)
        {
            if (Mapa[i][j] == TipoBloque)
            {
                FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
                GetWorld()->SpawnActor<AActor>(ClaseBloque, Posicion, FRotator::ZeroRotator);
            }
        }
    }
}

void ALaberintoConcreto::ConstruirPuertas(TArray<TArray<int32>>& Mapa, int32 TipoPuerta, TSubclassOf<AActor> ClasePuerta)
{
	if (!Laberinto) return;
	for (int32 i = 0; i < Mapa.Num(); i++)
	{
		for (int32 j = 0; j < Mapa[i].Num(); j++)
		{
			if (Mapa[i][j] == TipoPuerta)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(ClasePuerta, Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::ConstruirObstaculos(TArray<TArray<int32>>& Mapa, int32 TipoObstaculo, TSubclassOf<AActor> ClaseObstaculo)
{
	if (!Laberinto) return;
	for (int32 i = 0; i < Mapa.Num(); i++)
	{
		for (int32 j = 0; j < Mapa[i].Num(); j++)
		{
			if (Mapa[i][j] == TipoObstaculo)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(ClaseObstaculo, Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::LaberintoCompleto()
{
    if (!Laberinto) return;

    // Mapa de bloques (madera, concreto, acero, ladrillo)
    ConstruirBloques(Laberinto->aMapaBloques, 1, ABloqueMadera::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 2, ABloqueConcreto::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 3, ABloqueAcero::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 4, ABloqueLadrillo::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 5, ABloqueRotador::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 6, ABloqueMov::StaticClass());

    ConstruirObstaculos(Laberinto->aMapaObstaculo, 7, AObstaculo::StaticClass());
    ConstruirPuertas(Laberinto->aMapaPuertas, 8, APuerta::StaticClass());

}