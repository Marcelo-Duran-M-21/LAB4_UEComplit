// Fill out your copyright notice in the Description page of Project Settings.


#include "ClockTower.h"

void AClockTower::TimeChanged()
{
	//When the time has changed, this Clock Tower (that is a Publisher)
	//notifies to all the subscribers that the time has changed
		NotifySubscribers();

}

void AClockTower::SetTimeOfDay(FString myTime)
{
	// Set the time using the passed parameterand warn that it's changed
		Time = myTime;
	TimeChanged();

}
