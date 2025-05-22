// Fill out your copyright notice in the Description page of Project Settings.


#include "Puerta.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

// Sets default values
APuerta::APuerta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla
    UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PuertaMesh"));
    RootComponent = MeshComponent;

    // Cargar un mesh por defecto desde el contenido del motor o del juego
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
        MeshComponent->SetRelativeScale3D(FVector(1.f, 1.0f, 5.0f)); // forma rectangular tipo puerta
       // MeshComponent->SetRelativeLocation(FVector(1460.0f, 1370.0f, 160.0f)); // ajustar altura
    }
}

// Called when the game starts or when spawned
void APuerta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuerta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

