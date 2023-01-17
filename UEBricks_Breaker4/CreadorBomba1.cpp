// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorBomba1.h"
#include "Bomba1.h"

ACreadorBomba1::ACreadorBomba1()
{
	PosX = 80.0f;
	PosY = 0.0f;
	PosZ = 200.0f;
}

AFM_Bomba* ACreadorBomba1::FabricarBomba(FString BombaName)
{
	FVector SpawnD(PosX, PosY, PosZ);
	FVector Restador(0.0f, 0.0f, 25.0f);

	FRotator Rotacion(30.0f, 35.0f, 40.0f);

	if (BombaName.Equals("Bomba1")) {
		return GetWorld()->SpawnActor<ABomba1>(ABomba1::StaticClass(), SpawnD, Rotacion);
		SpawnD = SpawnD - Restador;
	}
	return nullptr;
}
