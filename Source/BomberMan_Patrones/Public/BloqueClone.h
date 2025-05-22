// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPrototype.h"
#include "BloqueClone.generated.h"

UCLASS()
class BOMBERMAN_PATRONES_API ABloqueClone : public AActor, public IIPrototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueClone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AActor* Clone(FVector SpawnLocation, FRotator SpawnRotation) override;


};