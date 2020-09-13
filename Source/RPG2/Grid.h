// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridRow.h"
#include <FVector>
#include "GameFramework/Pawn.h"
#include "Grid.generated.h"

UCLASS()
class RPG2_API AGrid : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid Rows", Category = "Grid"))
		int rows;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid Columns", Category = "Grid"))
		int columns;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid Distance", Category = "Grid"))
		float distance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid Vectors", Category = "Grid"))
		TArray<FVector> vectors;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "GridArray", Category = "Grid"))
	//TArray<AGridRow*> Columns;

};
