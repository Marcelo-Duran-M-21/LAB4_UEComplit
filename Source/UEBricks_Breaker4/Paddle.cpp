// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "Ball.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SM_Paddle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Paddle"));
	RootComponent = SM_Paddle;

	SM_Paddle->SetEnableGravity(false);
	SM_Paddle->SetConstraintMode(EDOFMode::XZPlane);
	
	
	SM_Paddle->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Paddle->SetCollisionProfileName(TEXT("PhisicActor"));

	//agregamos nuestros valores de loslimites del juego
	FieldHight = 40.f;
	FieldWidth = 40.f;

	

	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));


}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
	//tomamos ubicacion del paddle
	CurrentLocation = this->GetActorLocation();
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//limite del game 
if (this->GetActorLocation().Z > FieldHight) {
	CurrentLocation = FVector(CurrentLocation.X,0.f, FieldHight-1);

	}

}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APaddle::MoveHorizontal(float AxisValue)
{
	FVector NewLocation = GetActorLocation();
	
	AddMovementInput(FVector(AxisValue, 0.0f, 0.f), 1.0f, true);
}
//aqui agregamos un vector del nuevo movimiento en vertical como nuevo movimiento de entrada
void APaddle::MoveVer(float _VerAxisValue)
{
	FVector NewLocation = GetActorLocation();

	AddMovementInput(FVector(0.0f, 0.0f, _VerAxisValue), 1.0f, true);
	
	
}

