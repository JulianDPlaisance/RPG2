// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GridRow.generated.h"

UCLASS()
class RPG2_API AGridRow : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGridRow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Grid"))
	TArray<GameObject*> Rows;
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Grid"))
		UPointLightComponent* lit;*/

	UFUNCTION(BlueprintCallable, meta = (Category = "Grid"))
		void Add(GameObject* val) { Rows.Add(val); };
};
