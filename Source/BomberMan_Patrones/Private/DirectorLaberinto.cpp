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

void ADirectorLaberinto::SetLaberintoBuilder(AActor* Builder)
{
    LaberintoBuilder = Cast<IILaberintoBuilder>(Builder);
    if (!LaberintoBuilder)
    {
        UE_LOG(LogTemp, Error, TEXT("SetBuilder(): El actor no implementa IILaberintoBuilder."));
    }
}

ALaberinto* ADirectorLaberinto::GetLaberinto()
{
    if (LaberintoBuilder)
    {
        return LaberintoBuilder->GetLaberinto();
    }
    UE_LOG(LogTemp, Error, TEXT("GetLaberinto(): Builder no asignado."));
    return nullptr;
}