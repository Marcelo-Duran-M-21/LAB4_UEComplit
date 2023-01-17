// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorBomba2.h"
#include "Bomba2.h"

ACreadorBomba2::ACreadorBomba2()
{
	PosX = 300;
	PosY = 0.f;
	PosZ = 50.f;
}

AFM_Bomba* ACreadorBomba2::FabricarBomba(FString BombaName)
{
	FVector SpawnD(PosX, PosY, PosZ);
	FVector Restador(0.0f, 0.0f, 25.0f);

	FRotator Rotacion(30.0f, 35.0f, 40.0f);

	if (BombaName.Equals("Bomba1")) {
		return GetWorld()->SpawnActor<ABomba2>(ABomba2::StaticClass(), SpawnD, Rotacion);
		SpawnD = SpawnD -Restador;
	
}
