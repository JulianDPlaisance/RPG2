// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseWeapon.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RPG2_API UBaseWeapon : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Weapon_Accuracy", Category = "Weapon"))
		int accuracy = 100;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Weapon_Power", Category = "Weapon"))
		int power = 10;
	UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, meta = (DisplayName = "Weapon_Durability", Category = "Weapon"))
		int Durability = 5;

	
};
