// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "TimerManager.h"

// Sets default values
AEnemigo::AEnemigo()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Representa la malla del bloque
	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	//Adjunta la malla al componente
	MallaEnemigo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaEnemigo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	if (ObjetoMallaEnemigo.Succeeded())
	{
		//Cargar la malla del bloque
		MallaEnemigo->SetStaticMesh(ObjetoMallaEnemigo.Object);

		MallaEnemigo->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	bAvanzandoHaciaLimite = true;
	DistanciaMaxima = 0.f;
	VelocidadMovimiento = 100.f;
	DireccionMovimientoActual = EDireccionMovimiento::MoverX;
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PosicionActual = GetActorLocation();  // 1. Obtenemos la posición actual del enemigo
	float Movimiento = VelocidadMovimiento * DeltaTime;  // 2. Calculamos cuánto debe moverse este frame
	float DistanciaRecorrida = 0.f;  // 3. Variable auxiliar

	switch (DireccionMovimientoActual)
	{
	case EDireccionMovimiento::MoverX:
		// 4. Movemos el enemigo hacia adelante o atrás en X
		if (bAvanzandoHaciaLimite)
			PosicionActual.X += Movimiento;
		else
			PosicionActual.X -= Movimiento;

		// 5. Calculamos cuánto se ha alejado del punto inicial en X
		DistanciaRecorrida = FMath::Abs(PosicionActual.X - PosicionInicial.X);

		// 6. Si nos pasamos del límite, invertimos dirección
		if (DistanciaRecorrida >= DistanciaMaxima)
			bAvanzandoHaciaLimite = !bAvanzandoHaciaLimite;

		break;

	case EDireccionMovimiento::MoverY:
		if (bAvanzandoHaciaLimite)
			PosicionActual.Y += Movimiento;
		else
			PosicionActual.Y -= Movimiento;

		DistanciaRecorrida = FMath::Abs(PosicionActual.Y - PosicionInicial.Y);

		if (DistanciaRecorrida >= DistanciaMaxima)
			bAvanzandoHaciaLimite = !bAvanzandoHaciaLimite;

		break;

	case EDireccionMovimiento::ElevarZ:
		// Movimiento instantáneo a una altura fija
		PosicionActual.Z = PosicionInicial.Z + DistanciaMaxima;
		
		if (bAvanzandoHaciaLimite)
			PosicionActual.X += Movimiento;
		else
			PosicionActual.X -= Movimiento;

		// 5. Calculamos cuánto se ha alejado del punto inicial en X
		DistanciaRecorrida = FMath::Abs(PosicionActual.X - PosicionInicial.X);

		// 6. Si nos pasamos del límite, invertimos dirección
		if (DistanciaRecorrida >= DistanciaMaxima)
			bAvanzandoHaciaLimite = !bAvanzandoHaciaLimite;
		break;
	}

	SetActorLocation(PosicionActual);  // 7. Aplicamos la nueva posición al enemigo
}

void AEnemigo::Patrullar()
{
}

void AEnemigo::Atacar()
{
}



void AEnemigo::ConfigurarMovimiento(FVector PosInicial, float Distancia, float Velocidad, EDireccionMovimiento Direccion)
{
	PosicionInicial = PosInicial;
	DistanciaMaxima = Distancia;
	VelocidadMovimiento = Velocidad;
	DireccionMovimientoActual = Direccion;
	bAvanzandoHaciaLimite = true;
}