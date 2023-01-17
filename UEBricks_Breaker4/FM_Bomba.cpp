// Fill out your copyright notice in the Description page of Project Settings.


#include "FM_Bomba.h"

// Sets default values
AFM_Bomba::AFM_Bomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BombaMesh(TEXT("StaticMesh'/Game/Meshes/SM_Ball.SM_Ball'"));

	SM_bomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Bomba"));
	SM_bomba->SetStaticMesh(BombaMesh.Object);
	RootComponent = SM_bomba;

	TiempoDuracion = 0.0f;
}

// Called when the game starts or when spawned
void AFM_Bomba::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFM_Bomba::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Generando las Bombas %s"), *ObtenerNombreBomba()));
}

void AFM_Bomba::Cargar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("Se Bomba estan cargando las capsulas")));
}

void AFM_Bomba::Desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Purple, FString::Printf(TEXT("Se Bomba estan desplegando las capsulas")));
}

void AFM_Bomba::Destruir()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Las Bomba se estan destruyendo")));
}

FString AFM_Bomba::ObtenerNombreBomba()
{
	return NombreBomba ;
}



