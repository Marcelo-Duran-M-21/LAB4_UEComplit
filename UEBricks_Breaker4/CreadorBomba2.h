// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreadorBomba.h"
#include "CreadorBomba2.generated.h"

/**
 * 
 */
UCLASS()
class UEBRICKS_BREAKER4_API ACreadorBomba2 : public ACreadorBomba
{
	GENERATED_BODY()
private:
	float PosX, PosY, PosZ;
public:
	ACreadorBomba2();

	public:
	//Fabricar la Capsula seleccionada
	virtual AFM_Bomba* FabricarBomba(FString BombaName) override;
	
};
