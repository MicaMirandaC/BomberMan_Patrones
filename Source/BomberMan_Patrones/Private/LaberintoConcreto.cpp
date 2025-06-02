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
	//MapaDeBloques.Add(6, ABloqueMov::StaticClass());
	

	MapaDeObstaculos.Add(7, AObstaculo::StaticClass());

	MapaDePuertas.Add(8, APuerta::StaticClass());
	
	// Inicializar constantes de posición para clonar a la izquierda
	XInicial = 10.0f;
	YInicial = 60.0f;
	ZInicial = 0.0f;

	Filas = 20;    // acorde a aMapaBloques.Num()
	Columnas = 20;// acorde a aMapaBloques[0].Num()

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

void ALaberintoConcreto::ConstruirMuros()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];
			
			// Solo bloques tipo 4 son muros
			if (Tipo == 4 && MapaDeBloques.Contains(Tipo))
			{
				FVector Posicion(XInicial + i * 100, YInicial + j * 100, ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeBloques[Tipo], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::GenerandoMitadDerecha()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Filas; i++)
	{
		for (int32 j = Columnas / 2; j < Columnas; j++)
		{
			if (i > 0 && i < Filas - 1 && j > 0 && j < Columnas - 1)
			{
				int32 Probabilidad = FMath::RandRange(0, 100); // de 0 a 100

				if (Probabilidad < 50) // probabilidad de poner bloque
				{
					Laberinto->aMapaBloques[i][j] = FMath::RandRange(1, 6); // bloque aleatorio
				}
				else
				{
					Laberinto->aMapaBloques[i][j] = 0; // dejar espacio vacío
				}
			}
		}
	}
}

void ALaberintoConcreto::ConstruirMitadDerecha()
{
	if (!Laberinto) return;
	UWorld* Mundo = GetWorld();
	//Para clonar
	BloquesDerecha.Empty(); // Limpiar antes de guardar nuevos

	for (int i = 0; i < Laberinto->aMapaBloques.Num(); ++i)
	{
		for (int j = Laberinto->aMapaBloques[i].Num()/ 2; j < Columnas; ++j)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];

			// Solo si el tipo es un bloque válido
			if (MapaDeBloques.Contains(Tipo))
			{
				FVector Posicion(XInicial + i * 100, YInicial + j * 100, ZInicial);
				ABloque* BloqueSpawn = Mundo->SpawnActor<ABloque>(MapaDeBloques[Tipo]);
				if (BloqueSpawn)
				{
					BloqueSpawn->SetActorLocation(Posicion);
					BloquesDerecha.Add(BloqueSpawn);
				}
			}
		}
	
	}
}

void ALaberintoConcreto::ClonarMitadIzquierda()
{
	if (!Laberinto || !GetWorld()) return;

	int32 Indice = 0;

	for (int32 i = 0; i < Filas; ++i)
	{
		for (int32 j = Columnas - 1; j >= Columnas / 2; --j)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];

			if (Tipo != 0 && Indice < BloquesDerecha.Num())
			{
				ABloque* BloqueOriginal = Cast<ABloque>(BloquesDerecha[Indice]);

				if (BloqueOriginal)
				{
					int32 jEspejo = Columnas - j - 1;
					FVector PosEspejo = FVector(XInicial + i * 100, YInicial + jEspejo * 100, ZInicial);

					IIPrototype* PrototypeReal = Cast<IIPrototype>(BloqueOriginal);
					if (PrototypeReal)
					{
						AActor* Clonado = PrototypeReal->Clonar(GetWorld(), PosEspejo);
					}
				}

				Indice++;
			}
		}
	}
}

ALaberinto* ALaberintoConcreto::GetLaberinto()
{
	return Laberinto;
}
