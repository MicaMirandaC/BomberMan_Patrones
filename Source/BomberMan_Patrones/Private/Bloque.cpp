// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Representa la malla del bloque
	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//Adjunta la malla al componente
	MallaBloque->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaBloque.Succeeded())
	{
		//Cargar la malla del bloque
		MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);

		MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//Funciona para todas las clases hijas
AActor* ABloque::Clonar(UWorld* Mundo, FVector Destino)
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ABloque* Clon = World->SpawnActor<ABloque>(GetClass(), Destino, FRotator::ZeroRotator, SpawnParams);

	// Copia material si existe
	if (Clon && MallaBloque && MallaBloque->GetMaterial(0))
	{
		Clon->MallaBloque->SetMaterial(0, MallaBloque->GetMaterial(0));
	}

	return Clon;
}


