// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FM_Bomba.generated.h"

UCLASS()
class UEBRICKS_BREAKER4_API AFM_Bomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFM_Bomba();
	FString NombreBomba;
	FString TipoBomba;
	FString TipoEfecto;
	FString TipoDuracion;
	float TiempoDuracion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_bomba;
public:	
	// Called every frame
	virtual void Generar();
	void Cargar();
	void Desplegar();
	void Destruir();
	FString ObtenerNombreBomba();
};
