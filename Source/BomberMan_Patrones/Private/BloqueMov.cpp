// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMov.h"

//Constructor
ABloqueMov::ABloqueMov()
{
    PrimaryActorTick.bCanEverTick = true; // Habilita la actualización en cada frame
    //Guarda la posicion del bloque en el momento de su creacion
    PosicionInicial = GetActorLocation();

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
    //Tiempo antes de que el bloque elija una nueva dirección
    //LOS 10 SEGUNDOS PARA EL CAMBIO
    TiempoEntreMovimientos = 5.0f;
    VelocidadMovimiento = 200.0f; // Ajusta para hacerlo más lento o rápido
    TiempoDesdeUltimoMovimiento = 0.0f;
    bMoviendoAObjetivo = false;
    // Elegir eje inicial aleatoriamente entre "X" y "Z"
    UltimoEje = (FMath::RandBool()) ? "X" : "Z"; // Elegir aleatoriamente X o Z
}

void ABloqueMov::BeginPlay()
{
    Super::BeginPlay();

    PosicionInicial = GetActorLocation();
    PosicionObjetivo = PosicionInicial;
}

void ABloqueMov::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    //Se ejecuta en cada frame
    TiempoDesdeUltimoMovimiento += DeltaTime;
    //Cuando para el tiempo busca otro y activa el movimieno
    if (TiempoDesdeUltimoMovimiento >= TiempoEntreMovimientos)
    {
        ElegirNuevaDireccion();
        TiempoDesdeUltimoMovimiento = 0.0f;
        bMoviendoAObjetivo = true;
    }

    if (bMoviendoAObjetivo)
    {
        FVector PosActual = GetActorLocation();
        //AL interpolacion hace que se mueva a su nuevo destino de manera sueave
        FVector NuevaPos = FMath::VInterpTo(PosActual, PosicionObjetivo, DeltaTime, 5.0f);
        //Aplica la nueva posicion
        SetActorLocation(NuevaPos);

        // Verifica si ya llegó al destino
        if (FVector::Dist(NuevaPos, PosicionObjetivo) < 1.0f)
        {

            // Si está en destino, vuelve al inicio
            if (PosicionObjetivo != PosicionInicial)
            {
                PosicionObjetivo = PosicionInicial;
            }
            else
            {
                bMoviendoAObjetivo = false;
            }

        }
    }
}

void ABloqueMov::ElegirNuevaDireccion()
{
    FVector Offset(0.0f);
    const float DistanciaMovimiento = 100.0f;

    if (UltimoEje == "X")
    {
        // Después de moverse en X, cambia a Z
        UltimoEje = "Z";

        // Movimiento aleatorio en Z (Arriba o Abajo)
        int Direccion = FMath::RandRange(0, 1); // 0: arriba, 1: abajo

        if (Direccion == 0) Offset.Z += DistanciaMovimiento; // Arriba
        else Offset.Z -= DistanciaMovimiento; // Abajo
    }
    else
    {
        // Después de moverse en Z, cambia a X
        UltimoEje = "X";

        // Movimiento aleatorio en X (Derecha o Izquierda)
        int Direccion = FMath::RandRange(0, 1); // 0: derecha, 1: izquierda

        if (Direccion == 0) Offset.X += DistanciaMovimiento; // Derecha
        else Offset.X -= DistanciaMovimiento; // Izquierda
    }

    PosicionObjetivo = PosicionInicial + Offset; // Actualiza la posición objetivo
}
