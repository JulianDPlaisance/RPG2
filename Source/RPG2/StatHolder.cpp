// Fill out your copyright notice in the Description page of Project Settings.


#include "StatHolder.h"

// Sets default values for this component's properties
UStatHolder::UStatHolder()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStatHolder::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStatHolder::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UStatHolder::addHP(int32 val)
{
	HP += val;
}

void UStatHolder::addWeaponSkill(float val)
{
	WeaponSkill += val;
}

void UStatHolder::modStat(EStatName StatToMod, int32 amt)
{
	StatArray[(uint8)StatToMod] += amt;
}

void UStatHolder::modMoral(EMorality MoralToMod, int32 amt)
{
	MoralityArray[(uint8)MoralToMod] += amt;
}

