// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Ball.h"


// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.  improve=mejorar 
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>BrickMessAsset(TEXT("StaticMesh'/Game/Meshes/SM_Brick.SM_Brick'" ));
	// in this part we create un subobject 
	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	
	SM_Brick->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Brick->SetStaticMesh(BrickMessAsset.Object);
	
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetBoxExtent(FVector(25.5f, 12.0f, 12.0f));
	

	
	SM_Brick->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	BoxCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);
	// sirve para eliminar el brick
	//SM_Brick->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);
	// agegamos nuestos valores predefinidos de la rotacion de movimiento de bricks
	PitchValue = 0.f;
	YawValue = 0.f;
	RollValue = 0.f;

	

	static ConstructorHelpers::FObjectFinder<UMaterialInterface>Material(TEXT("Material'/Game/Materials/M_Brick.M_Brick'"));
	if (Material.Succeeded()) {
		auto* MaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, Material.Object);
		SM_Brick->SetMaterial(0, MaterialInstance);
	}





	lifeBrick=0;

}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();

	
	

}

void ABrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{

	//BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);
	

		if (OtherActor->ActorHasTag("Ball")) {
			ABall* MyBall = Cast<ABall>(OtherActor);

			FVector BallVelocity = MyBall->GetVelocity();
			BallVelocity *= (SpeedModifierOnBounce -1.0f);

			MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);
			

			FTimerHandle UnusedHandle;
			GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABrick::DestroyBrick, 0.1f, false);

		
		}
		
		


}


void ABrick::DestroyBrick()
{
	if (lifeBrick > 0) {
		lifeBrick--;
		return ;
	}
	else {
		this->Destroy();
	}
}

// Called every frame   
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// FQuat nos crea un punto de flotacion en 3d 
	FQuat QuatRotation = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);


	Mostrar();
	


	
}

void ABrick::Mostrar()
{
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Ya se Viene la reyna Boss"));
		TArray<AActor*> AllArickActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABrick::StaticClass(),AllArickActors);
		
			// Calcular el número de actores encontrados
			int32 NumBrickActors = AllArickActors.Num();

			// Mostrar el número de actores de tipo "Brick" en el escenario en un mensaje
			FString Message = FString::Printf(TEXT("There are %d Brick actors in the scene."), NumBrickActors);
			//FString Message1 = FString::Printf(TEXT("Se Viene la reyna Boss"));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, Message);

			NumBrickActors = AllArickActors.Num();
			/*	if (NumBrickActors ==0) {
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("nada"));
				}*/
		
		//return NumBrickActors;

		
	
}



void ABrick::spawnBrick()
{
	

}

