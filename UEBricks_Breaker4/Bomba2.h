// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FM_Bomba.h"
#include "Bomba2.generated.h"

/**
 * 
 */
UCLASS()
class UEBRICKS_BREAKER4_API ABomba2 : public AFM_Bomba
{
	GENERATED_BODY()
public:
	//Generar la Capsula
	virtual void Generar() override;
};
