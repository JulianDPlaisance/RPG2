// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <RPG2\StatHolder.h>
#include <RPG2\BaseWeapon.h>
#include "Components/ActorComponent.h"
#include "CharacterComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPG2_API UCharacterComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterComponent();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (DisplayName = "Stats Holder", Category = "Char_Stat"))
		UStatHolder* stat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (DisplayName = "Weapon Holder", Category = "Char_Stat"))
		UBaseWeapon* weapon;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getAttackChance(UCharacterComponent* other);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getEvadeChance(UCharacterComponent* other);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getCritChance(UCharacterComponent* other);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getAvoidCritChance(UCharacterComponent* other);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		TArray<int> getMorals(UCharacterComponent* other);

	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Holders"))
		UStatHolder* getStats() { return stat; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Holders"))
		UBaseWeapon* getWeapon() { return weapon; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Holders"))
		void setStats(UStatHolder* val) { stat = val; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Holders"))
		void setWeapon(UBaseWeapon* val) { weapon = val; }
};
