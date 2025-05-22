// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueClone.h"

// Sets default values
ABloqueClone::ABloqueClone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el componente de malla
	UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BloqueCloneMesh"));
	RootComponent = MeshComponent;

	// Cargar un mesh por defecto desde el contenido del motor o del juego
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(MeshAsset.Object);

		MeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

}

// Called when the game starts or when spawned
void ABloqueClone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueClone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* ABloqueClone::Clone(FVector SpawnLocation, FRotator SpawnRotation)
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	// Crear una nueva instancia del mismo tipo
	ABloqueClone* Clone = World->SpawnActor<ABloqueClone>(GetClass(), SpawnLocation, SpawnRotation);
	if (Clone)
	{
		// Copiar las propiedades necesarias
		Clone->Mesh->SetStaticMesh(this->Mesh->GetStaticMesh());
	}

	return Clone;
}
