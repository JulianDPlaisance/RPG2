// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "GameFramework/Pawn.h"
#include "Grid.generated.h"



USTRUCT(BlueprintType)
struct FGridInfo
{
	GENERATED_BODY()
	
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Tile_Row", Category = "Grid"))
		int row = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Tile_Column", Category = "Grid"))
		int column = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "bAccessible?", Category = "Grid"))
		bool bAccessible = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "ProceduralMeshComponent", Category = "Grid"))
		UProceduralMeshComponent* tileMesh;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Grid Vectors", Category = "Grid"))
		TArray<FRows> vectors;


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "GridArray", Category = "Grid"))
	//TArray<AGridRow*> Columns;

};
