// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "DirectorLaberinto.generated.h"

UCLASS()
class BOMBERMAN_PATRONES_API ADirectorLaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorLaberinto();

private:
	//El Constructor Actor, que debe ser un ConstructorDeAlojamiento
	IILaberintoBuilder* LaberintoBuilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void EstablecerILaberintoBuilder(IILaberintoBuilder* _Builder);

	void ConstruirTodo();
	//void ConstruirPuertas();
	//void ConstruirObstaculos();
	void LaberintoCompleto();
};

