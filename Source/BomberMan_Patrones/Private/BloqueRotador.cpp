// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueRotador.h"

ABloqueRotador::ABloqueRotador()
{
	PrimaryActorTick.bCanEverTick = true; // Habilitar la función Tick() 

	if (MallaBloque)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));

		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}

	//Inicializacion de variables
	bPuedeGirar = true;
	RotationSpeed = 50.0f; // Velocidad de rotación por defecto
}

void ABloqueRotador::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueRotador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPuedeGirar)
	{
		FRotator NewRotation = GetActorRotation();
		NewRotation.Yaw += RotationSpeed * DeltaTime;
		SetActorRotation(NewRotation);
	}
}

