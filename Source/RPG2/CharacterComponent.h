// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <RPG2\StatHolder.h>
#include <RPG2\BaseWeapon.h>
#include "Components/ActorComponent.h"
#include "CharacterComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPG2_API UCombatCalculator : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatCalculator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getAttackChance(UStatHolder* atk, UBaseWeapon* wep);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getEvadeChance(UStatHolder* tar);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getCritChance(UStatHolder* atk, UStatHolder* target, UBaseWeapon* wep);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getAvoidCritChance(UStatHolder* atk, UStatHolder* target, UBaseWeapon* wep);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		TArray<int> getMorals(UStatHolder* atk);

	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Holders"))
		UStatHolder* getStats(UStatHolder* atk);
};
