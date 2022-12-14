// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Suscriber.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USuscriber : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UEBRICKS_BREAKER4_API ISuscriber
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Update(class APublisher* Publisher) = 0;
};
