// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PA_BuilderBossQueen.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPA_BuilderBossQueen : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UEBRICKS_BREAKER4_API IPA_BuilderBossQueen
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
protected:
	FString enemy;
public:	
	
	virtual void BuildMeshEnemy(FString t) = 0;
	virtual void BuildVelocidadShip(FString t) = 0;
	virtual void lifetotal(FString t) = 0;
	virtual void pointSpawnEnemy(FString t) = 0;
	virtual void displaceEnemy (FString t)=0;
	FString getEnemyBuilder() 
	{
		return enemy;
	};

};
