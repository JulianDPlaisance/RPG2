// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Grid.generated.h"

USTRUCT(BlueprintType)
struct FGridInfo
{
	GENERATED_BODY()
	
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid info", Category = "Grid"))
		int row;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid info", Category = "Grid"))
		int column;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid info", Category = "Grid"))
		bool bAccessible;

};

USTRUCT(BlueprintType)
struct FRows
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid Rows", Category = "Grid"))
	TArray<FGridInfo> rows;
};

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
		TArray<FRows> vectors;


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "GridArray", Category = "Grid"))
	//TArray<AGridRow*> Columns;

};
