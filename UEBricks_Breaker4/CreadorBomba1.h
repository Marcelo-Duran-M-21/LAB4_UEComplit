// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreadorBomba.h"
#include "CreadorBomba1.generated.h"

/**
 * 
 */
UCLASS()
class UEBRICKS_BREAKER4_API ACreadorBomba1 : public ACreadorBomba
{
	GENERATED_BODY()
		public:
	ACreadorBomba1();
	float PosX;
	float PosY;
	float PosZ;
public:
		//Fabricar la Capsula seleccionada
		virtual AFM_Bomba* FabricarBomba(FString BombaName) override;
};
