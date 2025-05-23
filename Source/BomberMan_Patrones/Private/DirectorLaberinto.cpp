// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorLaberinto.h"
#include "ILaberintoBuilder.h"	
#include "Laberinto.h"

// Sets default values
ADirectorLaberinto::ADirectorLaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorLaberinto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorLaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ADirectorLaberinto::EstablecerILaberintoBuilder(IILaberintoBuilder* Builder)
{
	LaberintoBuilder = Cast<IILaberintoBuilder>(Builder);
	//Cast the passed Actor and set the Builder
	if (!LaberintoBuilder) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			TEXT("Invalid Cast! See Output log for more details"));
	}
}

ALaberinto* ADirectorLaberinto::GetLaberinto()
{
	if (LaberintoBuilder)
	{
		//Returns the Lodging of the Builder
		return LaberintoBuilder->GetLaberinto();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;
}

void ADirectorLaberinto::ConstruirLaberinto()
{
	if (!LaberintoBuilder)
	{
		UE_LOG(LogTemp, Error,
			TEXT("ConstruirLaberinto(): LaberintoBuilder es NULL, asegúrate de inicializarlo."));
		return;
	}

	// Estas líneas se ejecutan solo si el builder está correctamente asignado
	LaberintoBuilder->ConstruirBloques();
	LaberintoBuilder->ConstruirMuros();
	LaberintoBuilder->ConstruirPuertas();
	LaberintoBuilder->ConstruirObstaculos();
}
