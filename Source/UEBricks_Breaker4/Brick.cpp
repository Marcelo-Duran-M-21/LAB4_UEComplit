// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Ball.h"


// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.  improve=mejorar 
	PrimaryActorTick.bCanEverTick = true;
	// in this part we create un subobject 
	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	SM_Brick->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetBoxExtent(FVector(25.0f, 10.0f, 10.0f));
	

	RootComponent = BoxCollision;


	// agegamos nuestos valores predefinidos de la rotacion de movimiento de bricks
	PitchValue = 0.f;
	YawValue = 0.f;
	RollValue = 0.f;

	



}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();
	

	
}

void ABrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{

	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);
	

		if (OtherActor->ActorHasTag("Ball")) {
			ABall* MyBall = Cast<ABall>(OtherActor);

			FVector BallVelocity = MyBall->GetVelocity();
			BallVelocity *= (SpeedModifierOnBounce - 1.0f);

			MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);
			

			this->Destroy();

		
		}
		
		


}


void ABrick::DestroyBrick()
{
	this->Destroy();

}

// Called every frame   
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// FQuat nos crea un puento de flotacion en 3d 
	FQuat QuatRotation = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);
}

