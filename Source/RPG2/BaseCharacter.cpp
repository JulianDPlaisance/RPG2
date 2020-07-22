// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	stat = CreateDefaultSubobject<UStatHolder>(TEXT("Stat Array"));

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


int ABaseCharacter::getAttackChance(ABaseCharacter* other)
{
	//int32 weaponAcc = weapon.accuracy * stat.getWeaponSkill();
	//int32 charAcc = (stat.getStat(EStatName::AGILITY) * 4) + (stat.getStat(EStatName::INTUITION) * 2) + (stat.getStat(EStatName::EMPATHY)) + (stat.getStat(EStatName::LUCK) / 2);
	//int32 totalAcc = weaponAcc + (charAcc / 2);
	//return totalAcc;
	return 0;
}

int ABaseCharacter::getEvadeChance(ABaseCharacter* other)
{
	return 0;
}

int ABaseCharacter::getCritChance(ABaseCharacter* other)
{
	return 0;
}

int ABaseCharacter::getAvoidCritChance(ABaseCharacter* other)
{
	return 0;
}

TArray<int> ABaseCharacter::getMorals(ABaseCharacter* other)
{
	return TArray<int32>();
}
