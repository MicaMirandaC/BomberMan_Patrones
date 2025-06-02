// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
    if (MallaEnemigo) //Verifica si la maya existe
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_CobbleStone_Pebble.M_CobbleStone_Pebble'"));

        if (MaterialBase.Succeeded())
        {
            //Asigna el material
            MallaEnemigo->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void AEnemigoTerrestre::Patrullar()
{
    ConfigurarMovimiento(GetActorLocation(), 1000.f, 10.f, EDireccionMovimiento::MoverX);
}

void AEnemigoTerrestre::Atacar()
{
    ConfigurarMovimiento(GetActorLocation(), 1000.f, 100.f, EDireccionMovimiento::MoverX);
}


FString AEnemigoTerrestre::NombreDelEnemigo()
{
	return "Enemigo Terrestre 1";
}