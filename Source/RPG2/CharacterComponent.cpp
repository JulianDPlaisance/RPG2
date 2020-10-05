// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterComponent.h"

// Sets default values for this component's properties
UCharacterComponent::UCharacterComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UCharacterComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCharacterComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UCharacterComponent::getAttackChance(UCharacterComponent* other)
{
	float weaponAcc = weapon->accuracy * stat->getWeaponSkill();
	int32 charAcc = (stat->getStat(EStatName::AGILITY) * 4) + (stat->getStat(EStatName::INTUITION) * 2) + (stat->getStat(EStatName::EMPATHY)) + (stat->getStat(EStatName::LUCK) / 2);
	int32 totalAcc = weaponAcc + (charAcc / 2);
	return totalAcc;
}

int UCharacterComponent::getEvadeChance(UCharacterComponent* other)
{
	int32 evasionAgi = (stat->getStat(EStatName::AGILITY) * 2);
	int32 evasionDiv = (stat->getStat(EStatName::INTUITION) * 2) + (stat->getStat(EStatName::LUCK)) + (stat->getStat(EStatName::EMPATHY) * 3);
	int32 totalEvasion = evasionAgi + (evasionDiv / 2);
	return totalEvasion;
}

int UCharacterComponent::getCritChance(UCharacterComponent* other)
{
	return 0;
}

int UCharacterComponent::getAvoidCritChance(UCharacterComponent* other)
{
	return 0;
}

TArray<int> UCharacterComponent::getMorals(UCharacterComponent* other)
{
	return TArray<int32>();
}