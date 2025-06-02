// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueEspecial.generated.h"

UCLASS()
class BOMBERMAN_PATRONES_API ABloqueEspecial : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueEspecial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Propiedades:
	// Componente de malla estática
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	//UStaticMeshComponent* MallaBloqueEspecial;

	//Movimiento
	//float AlturaInicial;
	//bool Subiendo;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//public:

	// Clonación
	//virtual AActor* Clonar(FVector Pos, FRotator Rot) override;

	// Para del clon modificar sus propiedades
	//virtual void Configurar(FString Nombre) override;
};
