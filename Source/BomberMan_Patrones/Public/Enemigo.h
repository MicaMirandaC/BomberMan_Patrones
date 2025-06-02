// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UENUM()
enum class EDireccionMovimiento : uint8
{
	MoverX,MoverY,ElevarZ
};

UCLASS()
class BOMBERMAN_PATRONES_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaEnemigo;
public:
	//Funcions de POLIMIRFISMO en vez de tareas
	virtual void Patrullar();
	virtual void Atacar();

	virtual FString NombreDelEnemigo() PURE_VIRTUAL(AEnemigo::NombreDelEnemigo, return " ";);
	 
	void ConfigurarMovimiento(FVector PosInicial, float Distancia, float Velocidad, EDireccionMovimiento Direccion);


	// Variables de movimiento
	FVector PosicionInicial;
	float DistanciaMaxima;
	float VelocidadMovimiento;
	bool bAvanzandoHaciaLimite;
	EDireccionMovimiento DireccionMovimientoActual;
};
