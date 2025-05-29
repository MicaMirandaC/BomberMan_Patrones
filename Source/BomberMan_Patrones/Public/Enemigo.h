// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class BOMBERMAN_PATRONES_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaEnemigo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//Funcions de POLIMIRFISMO
	virtual void Custodia();
	virtual void Ataca();

	virtual FString NombreDelEnemigo() PURE_VIRTUAL(AEnemigo::NombreDelEnemigo, return " ";);
	
	// Acciones concretas
	void Elevarse(float Altura);
	void MoverEnX_IdaYVuelta(float Distancia);
	void MoverEnY_IdaYVuelta(float Distancia);

	public:
//Variables para el funcionamiento
	// Movimiento configurado desde el Tick
	bool bMoverEnX;
	bool bMoverEnY;
	float DistanciaMaxima;
	float Velocidad;

	FVector PosicionInicial;
	bool bDireccionAdelante;
	// Velocidad configurable

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float VelocidadMovimiento;

	// Dirección actual
	bool bAvanzandoHaciaLimite;
};
