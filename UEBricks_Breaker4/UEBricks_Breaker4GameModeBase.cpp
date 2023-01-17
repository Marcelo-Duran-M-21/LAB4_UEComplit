// Copyright Epic Games, Inc. All Rights Reserved.


#include "UEBricks_Breaker4GameModeBase.h"
#include "Paddle.h"
#include "Ball.h"
#include "Brick.h"
#include "CreadorBomba.h"
#include "Bomba1.h"
#include "Bomba2.h"
#include "CreadorBomba1.h"
#include "CreadorBomba2.h"

AUEBricks_Breaker4GameModeBase::AUEBricks_Breaker4GameModeBase()
{
	// Set this actor to call Tick() every frame. You can turn this off to
	//improve performance if you don't need it.
		PrimaryActorTick.bCanEverTick = true;

}

void AUEBricks_Breaker4GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if (FMath::FRand() < 0.05f)
	{
		SpawnRandomBomb();
	}*/
}
//void AUEBricks_Breaker4GameModeBase::SpawnRandomBomb()
//{
//	UWorld* World = GetWorld();
//	if (World)
//	{
//		AFM_Bomba* factory = NewObject<AFM_Bomba>(this, );
//		if (factory)
//		{
//			FVector spawnLocation = FVector(FMath::RandRange(-1000, 1000), FMath::RandRange(-1000, 1000), 0);
//			AFM_Bomba* bomb = factory->CreateBomb();
//			if (bomb)
//			{
//				bomb->SetActorLocation(spawnLocation);
//				bomb->SetActorRotation(FRotator(0, 0, 0));
//			}
//		}
//	}
//}
// aqui aplicamos el singleton 
void AUEBricks_Breaker4GameModeBase::BeginPlay()
{

	Super::BeginPlay();

	/*FRotator SpawnRotator(0, 0, 0);
	FVector Spawn1(10.0f, 0.0f, 40.0f);
	Brick21 = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator::ZeroRotator);*/
	FVector BrickPosition = FVector(-138, 0, 370);
	FVector Brickpo = FVector(-138, 0, 370);
	FVector BrickSpaceX = FVector(55, 0, 0);

	FVector BrickSpaceZ = FVector(0, 0, -30);

	int Colu = 0;

	while (Colu <5) {	//5	//for (int Colu = 0; Colu < 4; Colu++) {

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("hola")));

		for (int fila = 0; fila <6; fila++) {//6

			Brick21 = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), BrickPosition, FRotator::ZeroRotator);
			BrickPosition = BrickPosition + BrickSpaceX;



		}
		
		Brickpo += BrickSpaceZ;
		BrickPosition = Brickpo;
		
		Colu++;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("hola")));
	
}
	
				//Brick21=GetWorld()->SpawnActor<ABrick>(BrickPosition, BrickRotation);
		
		
	/*	FVector Loca=FVector(-150)
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				FVector BrickPosition = FVector(-50, 0,150);
		        FRotator BrickRotation = FRotator(0, 0, 0);
				GetWorld()->SpawnActor<ABrick>(BrickPosition, BrickRotation);
				FVector BrickPosition = FVector(i * 30, 0, j * 33);
				
			}
		}*/


		//Create 4 Inventory
		for (int i = 0; i <= 2; i++)
		{
			APaddle* SpawnedPaddle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());
			if (SpawnedPaddle)
			{
				//If the Spawn succeeds, set the Spawned inventory to the local one
				//and log the success string
				Paddle = SpawnedPaddle;
				GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created"), *Paddle->GetName()));
			}
		}


		////Crear la Fabrica de Capsulas
		//ACreadorBomba* Bomba1 = GetWorld()->SpawnActor<ACreadorBomba1>(ACreadorBomba1::StaticClass());

		//ACreadorBomba* Bomba2 = GetWorld()->SpawnActor<ACreadorBomba2>(ACreadorBomba2::StaticClass());


		////Crea una Capsula de poder y registra su nombre
		//AFM_Bomba* bom = Bomba1->GetBomba("");

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La Capsula es %s"),
		//	*Capsula->ObtenerNombreCapsula()));

		//Capsula = CapsulaPoder->GetCapsula("Poder");
		//Capsula = CapsulaPoder->GetCapsula("Poder");

		////Crea una Capsula de Danio y registra su nombre
		//Capsula = CapsulaDanio->GetCapsula("Danio");

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La Capsula es %s"),
		//	*Capsula->ObtenerNombreCapsula()));


		//Capsula = CapsulaDanio->GetCapsula("Danio");
		//Capsula = CapsulaDanio->GetCapsula("Danio");
}
	


	
