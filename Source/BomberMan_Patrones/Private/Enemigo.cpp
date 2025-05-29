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

	bMoverEnX = false;
	bMoverEnY = false;
	DistanciaMaxima = 0;
	bDireccionAdelante = true;
	VelocidadMovimiento = 100.0f; // Puedes ajustar este valor desde el editor

	bAvanzandoHaciaLimite = true;
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

	FVector PosicionActual = GetActorLocation();
	float NuevaX = PosicionActual.X;
	float NuevaY = PosicionActual.Y;

	if (bMoverEnX)
	{
		if (bAvanzandoHaciaLimite)
		{
			NuevaX += VelocidadMovimiento * DeltaTime;
			if (FMath::Abs(NuevaX - PosicionInicial.X) >= DistanciaMaxima)
			{
				bAvanzandoHaciaLimite = false;
			}
		}
		else
		{
			NuevaX -= VelocidadMovimiento * DeltaTime;
			if (NuevaX <= PosicionInicial.X)
			{
				NuevaX = PosicionInicial.X;
				bAvanzandoHaciaLimite = true;
			}
		}
		SetActorLocation(FVector(NuevaX, PosicionInicial.Y, PosicionActual.Z));
	}
	else if (bMoverEnY)
	{
		if (bAvanzandoHaciaLimite)
		{
			NuevaY += VelocidadMovimiento * DeltaTime;
			if (FMath::Abs(NuevaY - PosicionInicial.Y) >= DistanciaMaxima)
			{
				bAvanzandoHaciaLimite = false;
			}
		}
		else
		{
			NuevaY -= VelocidadMovimiento * DeltaTime;
			if (NuevaY <= PosicionInicial.Y)
			{
				NuevaY = PosicionInicial.Y;
				bAvanzandoHaciaLimite = true;
			}
		}
		SetActorLocation(FVector(PosicionInicial.X, NuevaY, PosicionActual.Z));
	}
}

void AEnemigo::Custodia()
{
}

void AEnemigo::Ataca()
{
}

// Movimiento completo de ida y vuelta (sin necesidad de usar Tick)
void AEnemigo::MoverEnX_IdaYVuelta(float Distancia)
{
	DistanciaMaxima = Distancia;
	bMoverEnX = true;
	bMoverEnY = false;
	PosicionInicial = GetActorLocation();
	bAvanzandoHaciaLimite = true;
}

void AEnemigo::MoverEnY_IdaYVuelta(float Distancia)
{
	DistanciaMaxima = Distancia;
	bMoverEnY = true;
	bMoverEnX = false;
	PosicionInicial = GetActorLocation();
	bAvanzandoHaciaLimite = true;
}

void AEnemigo::Elevarse(float Altura)
{
	FVector Pos = GetActorLocation();
	Pos.Z = Altura;
	SetActorLocation(Pos);
}

