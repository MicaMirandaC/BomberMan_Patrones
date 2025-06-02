// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre2.h"

AEnemigoTerrestre2::AEnemigoTerrestre2()
{
    if (MallaEnemigo) //Verifica si la maya existe
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_CobbleStone_Rough.M_CobbleStone_Rough'"));

        if (MaterialBase.Succeeded())
        {
            //Asigna el material
            MallaEnemigo->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}


void AEnemigoTerrestre2::Patrullar()
{
    ConfigurarMovimiento(GetActorLocation(), 300.f, 10.f, EDireccionMovimiento::MoverY);
}

void AEnemigoTerrestre2::Atacar()
{
    ConfigurarMovimiento(GetActorLocation(), 300.f, 100.f, EDireccionMovimiento::MoverY);
}


FString AEnemigoTerrestre2::NombreDelEnemigo()
{
	return "Enemigo Terrestre 2";
}