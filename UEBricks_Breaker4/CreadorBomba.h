// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FM_Bomba.h"
#include "CreadorBomba.generated.h"

UCLASS()
class UEBRICKS_BREAKER4_API ACreadorBomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreadorBomba();
	//Crear Capsula y devolverla. Es puramente virtual, por lo que no necesita una implementación en esta clase

	virtual AFM_Bomba* FabricarBomba(FString BombaName) PURE_VIRTUAL(ACreadorBomba::FabricarBomba, return nullptr;);

	//Ordena, elabora y devuelve una Capsula de una categoría específica
	AFM_Bomba* GetBomba(FString BombaName);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
