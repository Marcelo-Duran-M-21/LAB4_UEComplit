// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publisher.h"
#include "ClockTower.generated.h"

/**
 * 
 */
UCLASS()
class UEBRICKS_BREAKER4_API AClockTower : public APublisher
{
	GENERATED_BODY()

private:
	//The current time of this Clock Tower
	FString Time;
public:
	//Called when the time of this Clock Tower has changed
	void TimeChanged();
	//Set the time of this Clock Tower
	void SetTimeOfDay(FString myTime);
	//Return the time of this Clock Tower
	//void set 
	FORCEINLINE FString GetTime() { return Time; };

	
};
