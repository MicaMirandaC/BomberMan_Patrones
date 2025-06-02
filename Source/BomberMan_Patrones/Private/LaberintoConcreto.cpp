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
#include "IPrototype.h"

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
	
	//Crea una instancia del laberinto
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
			//Obtiene el tipo de Bloque en esta posicion
			int32 Tipo = Laberinto->aMapaBloques[i][j];
			
			// Solo bloques tipo 4 son muros
			if (Tipo == 4 && MapaDeBloques.Contains(Tipo))
			{
				//Calcula las posiciones del mundo y genera el bloque 
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
	{//Para no generar bloques pegados al muro central
		for (int32 j= (Columnas / 2) + 1; j < Columnas - 1; j++)
		{
			//Evita los bordes para no generar bloques en los extremos.
			if (i > 0 && i < Filas - 1 && j> 0 && j < Columnas - 1)
			{
				int32 Probabilidad = FMath::RandRange(0, 100); // de 0 a 100

				// Si la probabilidad es menor a 50, se pone un bloque
				if (Probabilidad < 50) // probabilidad de poner bloque
				{
					Laberinto->aMapaBloques[i][j] = FMath::RandRange(1, 6); // bloque aleatorio
				}
				else
				{ //Si no se pone un bloque se deja con 0
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
		for (int32 j = (Columnas / 2) + 1; j < Columnas - 1; j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];

			// Solo si el tipo es un bloque válido
			if (MapaDeBloques.Contains(Tipo))
			{
				//Calcula la posición y genera el bloque del tipo correspondiente.
				FVector Posicion(XInicial + i * 100, YInicial + j * 100, ZInicial);
				ABloque* BloqueSpawn = Mundo->SpawnActor<ABloque>(MapaDeBloques[Tipo]);
				
				//Si se generó correctamente, se le asigna su posición y se guarda para CLONAR después.
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

	//Indice servirá para recorrer los bloques guardados de la derecha.
	int32 Indice = 0;

	for (int32 i = 0; i < Filas; ++i)
	{
		for (int32 j = (Columnas / 2) + 1; j < Columnas - 1; j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];

			//Solo intenta clonar si el tipo no es 0
			if (Tipo != 0 && Indice < BloquesDerecha.Num())
			{
				ABloque* BloqueOriginal = Cast<ABloque>(BloquesDerecha[Indice]);
				//Calcula la columna espejo 
				if (BloqueOriginal)
				{
					int32 jEspejo = Columnas - j - 1;
					FVector PosEspejo = FVector(XInicial + i * 100, YInicial + jEspejo * 100, ZInicial);

					//Usa Cast para asegurarse de que implementa la interfaz IIPrototype.
					IIPrototype* PrototypeReal = Cast<IIPrototype>(BloqueOriginal);
					
					//Clona y el indice aumenta siempre y cuando se hay clonado
					if (PrototypeReal)
					{
						AActor* Clonado = PrototypeReal->Clonar(GetWorld(), PosEspejo);
					}
				}
				++Indice; // MOVER DENTRO DEL IF PARA ASEGURAR QUE SOLO AUMENTE SI SE USÓ
			}
		}
	}
}

ALaberinto* ALaberintoConcreto::GetLaberinto()
{
	return Laberinto;
}
