#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Laberinto.h"
#include "Bloque.h"
#include "LaberintoConcreto.generated.h"
UCLASS()
class BOMBERMAN_PATRONES_API ALaberintoConcreto : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	//ESTE ES EL BUILDER
	ALaberintoConcreto();

private:
	//Es un puntero a un objeto de la clase ALaberinto
	//Referencia al producto final
	class ALaberinto* Laberinto;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Constructor de laberinto

	void GenerandoMitadDerecha() override;
	void ConstruirMuros() override;
	void ConstruirMitadDerecha() override;
	void ClonarMitadIzquierda() override;
	virtual class ALaberinto* GetLaberinto() override;
	
	//PROTOTYPE
	TArray<ABloque*> BloquesDerecha;

	//TMap: Asocia los numeros enteros con las subclases derivadas de actor
	// Mapeos para cada tipo
	//Esto tiene que estar aqui porque como este construye necesita saber que tipo de bloque es
	TMap<int32, TSubclassOf<AActor>> MapaDeBloques;
	TMap<int32, TSubclassOf<AActor>> MapaDePuertas;
	TMap<int32, TSubclassOf<AActor>> MapaDeObstaculos;
	
	//Solo para asegurar que se inicialice bien
	// Constantes para posición inicial
	float XInicial = 0.0f;
	float YInicial = 0.0f;
	float ZInicial = 0.0f;

	// Tamaño del mapa (filas y columnas)
	int32 Filas = 0;
	int32 Columnas = 0;
};