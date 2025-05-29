// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueEspecial.h"

// Sets default values
ABloqueEspecial::ABloqueEspecial()
{
	PrimaryActorTick.bCanEverTick = true;

	//Representa la malla del bloque
	MallaBloqueEspecial = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//Adjunta la malla al componente
	MallaBloqueEspecial->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloqueEspecial(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaBloqueEspecial.Succeeded())
	{
		//Cargar la malla del bloque
		MallaBloqueEspecial->SetStaticMesh(ObjetoMallaBloqueEspecial.Object);

		MallaBloqueEspecial->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	if (MallaBloqueEspecial) //Verifica si la maya existe
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));

		if (MaterialBase.Succeeded())
		{
			//Asigna el material
			MallaBloqueEspecial->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
	Subiendo = true;

}

// Called when the game starts or when spawned
void ABloqueEspecial::BeginPlay()
{
	Super::BeginPlay();
	
	AlturaInicial = GetActorLocation().Z;
}

// Called every frame
void ABloqueEspecial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Pos = GetActorLocation();
	float Desplazamiento = 20.0f * DeltaTime;

	Pos.Z += Subiendo ? Desplazamiento : -Desplazamiento;
	SetActorLocation(Pos);

	if (FMath::Abs(Pos.Z - AlturaInicial) > 50.0f)
		Subiendo = !Subiendo;
}

AActor* ABloqueEspecial::Clonar(FVector Pos, FRotator Rot)
{
	{
		//Asegura que el World esté disponible (necesario para spawn)
		if (!GetWorld()) return nullptr;
		//Crea una instancia de FActorSpawnParameters nos permite configurar opciones avanzadas al momento de crear un nuevo actor con spawn
		//Mayor FIDELIDAD al clonar, esta funcion es la que nos asegura copiar las propiedades
		FActorSpawnParameters Parametros;
		Parametros.Template = this; // Usa este actor como plantilla

		//Hace una copia exacta del actor actual y se devuelve
		return GetWorld()->SpawnActor<ABloqueEspecial>(GetClass(), Pos, Rot, Parametros);


	}
}	

/*
//Cambiar el nombre del actor
void ABloqueEspecial::Configurar(FString Nombre)
{
	SetActorLabel(Nombre);
	/*
	// Genera una escala aleatoria entre 0.5 y 2.0
	float Escala = FMath::FRandRange(0.5f, 2.f);
	SetActorScale3D(FVector(Escala)); // Escala uniforme en X, Y, Z

	// Mensaje para depurar
	UE_LOG(LogTemp, Warning, TEXT("Configurando %s con escala %.2f"), *Nombre, Escala);
}
*/