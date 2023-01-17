// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Brick.generated.h"
class UBoxComponent;
UCLASS()
class UEBRICKS_BREAKER4_API ABrick : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

	ABrick();

protected:
	// Called when the game starts or when spawned  beginplay=empezar el juego 
	virtual void BeginPlay() override;

	/// <summary>
	/// hacemos visibe con uproperty el bluprints 
	/// </summary>
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UStaticMeshComponent* SM_Brick;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* BoxCollision;
	//modificamos el 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UMaterialInterface* SM_Material;

	// agregamos nueva propiedad a nuestro ladrillo de poder girar solo
	UPROPERTY(EditAnywhere, Category = "Movement")
		float PitchValue;//cabezera

	UPROPERTY(EditAnywhere, Category = "Movement")
		float YawValue;//derrape

	UPROPERTY(EditAnywhere, Category = "Movement")
		float RollValue;//rodar


	float SpeedModifierOnBounce = 1.01f; // rebote del modificador de velocidad 

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
		int32 lifeBrick;
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult);
	
	void DestroyBrick();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// funcion para contar todos los actores de bricks 
	void Mostrar();


	void spawnBrick();
};
