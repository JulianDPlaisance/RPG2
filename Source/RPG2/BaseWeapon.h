// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseWeapon.generated.h"

/**
 * 
 */
UCLASS()
class RPG2_API UBaseWeapon : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (DisplayName = "Weapon_Accuracy", Category = "Weapon"))
		int accuracy = 100;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (DisplayName = "Weapon_Power", Category = "Weapon"))
		int power = 10;
	UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere, meta = (DisplayName = "Weapon_Durability", Category = "Weapon"))
		int Durability = 5;

	
};
