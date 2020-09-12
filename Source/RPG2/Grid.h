// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Runtime\Engine\Classes\Components\PointLightComponent.h>
#include "GameFramework/Pawn.h"
#include "Grid.generated.h"

UCLASS()
class UGridX : public UObject
{
	GENERATED_BODY()
	
public:

	//TArray<int> Rows;
	////UPROPERTY(EditAnywhere, BlueprintReadWrite, meta(Category = "Grid"))
	//	//UPointLightComponent* lit;

	//UGridX()
	//{
	//	Rows.Init(1, 10);
	//}
	//UGridX(int num)
	//{
	//	Rows.Init(1, num);
	//}
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

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "GridArray", Category = "Grid"))
	//TArray<UGridX*> Columns;

};
