// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterComponent.h"

// Sets default values for this component's properties
UCombatCalculator::UCombatCalculator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;


	// ...
}


// Called when the game starts
void UCombatCalculator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCombatCalculator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UCombatCalculator::getAttackChance(UStatHolder* atk, UBaseWeapon* wep)
{
	float weaponAcc = wep->accuracy * atk->getWeaponSkill();
	int32 charAcc = (atk->getStat(EStatName::AGILITY) * 4) + (atk->getStat(EStatName::INTUITION) * 2) + (atk->getStat(EStatName::EMPATHY)) + (atk->getStat(EStatName::LUCK) / 2);
	int32 totalAcc = weaponAcc + (charAcc / 2);
	return totalAcc;
}

int UCombatCalculator::getEvadeChance(UStatHolder* tar)
{
	int32 evasionAgi = (tar->getStat(EStatName::AGILITY) * 2);
	int32 evasionDiv = (tar->getStat(EStatName::INTUITION) * 2) + (tar->getStat(EStatName::LUCK)) + (tar->getStat(EStatName::EMPATHY) * 3);
	int32 totalEvasion = evasionAgi + (evasionDiv / 2);
	return totalEvasion;
}

int UCombatCalculator::getCritChance(UStatHolder* atk, UStatHolder* target, UBaseWeapon* wep)
{
	return 0;
}

int UCombatCalculator::getAvoidCritChance(UStatHolder* atk, UStatHolder* target, UBaseWeapon* wep)
{
	return 0;
}

TArray<int> UCombatCalculator::getMorals(UStatHolder* tar)
{
	return TArray<int32>();
}

UStatHolder* UCombatCalculator::getStats(UStatHolder* tar)
{
	return nullptr;
}
