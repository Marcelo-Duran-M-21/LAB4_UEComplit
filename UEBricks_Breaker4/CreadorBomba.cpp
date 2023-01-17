// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorBomba.h"

// Sets default values
ACreadorBomba::ACreadorBomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACreadorBomba::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreadorBomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AFM_Bomba* GetBomba(FString BombaName)
{
	AFM_Bomba* Bom = FabricarBomba(Category);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Fabricando capsulas %s"), *Bom->ObtenerNombreBomba()));

	Bom->Generar();
	Bom->Cargar();
	Bom->Desplegar();
	Bom->Destruir();

	return Bom;
}
