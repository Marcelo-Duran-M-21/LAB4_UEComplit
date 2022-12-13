// Fill out your copyright notice in the Description page of Project Settings.


#include "CapAyuda.h"
#include "ClockTower.h"
// Sets default values
ACapAyuda::ACapAyuda()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapAyuda::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapAyuda::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapAyuda::Destroyed()
{
	Super::Destroyed();
	//Log Error if its Clock Tower is NULL
	if (!ClockTower) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed():ClockTower is NULL, make sure it's initialized.")); return; }
			//Unsubscribe from the Clock Tower if it's destroyed
			ClockTower->UnSubscribe(this);
}

void ACapAyuda::Update(APublisher* Publisher)
{
	//Execute the routine
	Morph();
}

void ACapAyuda::Morph()
{

	bool comido = true;
	if (comido == true) {
		//Spawn the Clock Tower
		FVector nu = FVector(12.f, 3.f, 45.f);
		APaddle* Padle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("se creo un nuevo paddle de nuestra clase gracias a observer")));


	}

	//Log Error if its Clock Tower is NULL
	if (!ClockTower) {
		UE_LOG(LogTemp, Error, TEXT("Morph():ClockTower is NULL, make sure it's initialized.")); return;
	}
	//Get the current time of the Clock Tower
	FString Time = ClockTower->GetTime();
	if (!Time.Compare("Comido"))
	{
		//// transforma  si fue comido o ala ves spawnea new paddle
		//bool comido = true;
		//if (comido == true) {
		//	//Spawn the Clock Tower
		//	FVector nu = FVector(12.f, 3.f, 45.f);
		//	APaddle* Padle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());

		//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("se creo un nuevo paddle de nuestra clase gracias a observer")));

		
	}
	else if (!Time.Compare("Comido"))
	{
			// transforma  si fue comido o ala ves spawnea new paddle
			bool comido = true;
			if (comido == true) {
				//Spawn the Clock Tower
				FVector nu = FVector(12.f, 3.f, 45.f);
				APaddle* Padle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());

				GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("se creo un nuevo paddle de nuestra clase gracias a observer")));

	}
	else if (!Time.Compare("Evening"))
	{
		//Execute the Evening routine
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("It is %s, so FreakyAllen morphs into a blood sucking wogglesnort"),	* Time));
	}
}

void ACapAyuda::SetClockTower(AClockTower* myClockTower)
{
	//Log Error if the passed Clock Tower is NULL
	if (!myClockTower) {
		UE_LOG(LogTemp, Error, TEXT("SetClockTower(): myClockTower is NULL, make sure it'sinitialized.")); return;
	}
	//Set the Clock Tower and Subscribe to that
	ClockTower = myClockTower;
	ClockTower->Subscribe(this);
}

void ACapAyuda::comer()
{
	
		int comido = true;
		if (comido == true) {
			//Spawn the Clock Tower
			FVector nu = FVector(12.f, 3.f, 45.f);
			APaddle* Padle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());


		}
	

}


