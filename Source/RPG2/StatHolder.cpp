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

void UStatHolder::addLevel(int32 val)
{
	if (val > 0)
	{
		level++;
		bRaiseStat(EStatName::STRENGTH);
		bRaiseStat(EStatName::AGILITY);
		bRaiseStat(EStatName::VITALITY);
		bRaiseStat(EStatName::REASON);
		bRaiseStat(EStatName::INTUITION);
		bRaiseStat(EStatName::PERCEPTION);
		bRaiseStat(EStatName::LUCK);
		bRaiseStat(EStatName::CHARISMA);
		bRaiseStat(EStatName::EMPATHY);
		addLevel(val - 1);
	}
}

void UStatHolder::addExperience(int32 val)
{
	experience += (val / level);
	if (experience >= 100)
	{
		int tmp = experience / 100;
		addLevel(tmp);
		experience = experience % 100;
	}
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
	switch (StatToMod)
	{
	case EStatName::STRENGTH:
		StatArray[0] += amt;
		break;
	case EStatName::AGILITY:
		StatArray[1] += amt;
		break;
	case EStatName::VITALITY:
		StatArray[2] += amt;
		break;
	case EStatName::REASON:
		StatArray[3] += amt;
		break;
	case EStatName::INTUITION:
		StatArray[4] += amt;
		break;
	case EStatName::PERCEPTION:
		StatArray[5] += amt;
		break;
	case EStatName::LUCK:
		StatArray[6] += amt;
		break;
	case EStatName::CHARISMA:
		StatArray[7] += amt;
		break;
	case EStatName::EMPATHY:
		StatArray[8] += amt;
		break;
	}
}

void UStatHolder::modStatUp(EStatName StatToMod, float amt)
{
	statUp[(uint8)StatToMod] += amt;
}

void UStatHolder::modMoral(EMorality MoralToMod, int32 amt)
{
	MoralityArray[(uint8)MoralToMod] += amt;
}

void UStatHolder::bRaiseStat(EStatName StatToMod)
{
	float percent;
	switch (StatToMod)
	{
	case EStatName::STRENGTH:
		percent = (statUp[0] * 100.0f) + (StatArray[0] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::STRENGTH, std::max(1, (int)(percent / 10)));
		break;
	case EStatName::AGILITY:
		percent = (statUp[1] * 100.0f) + (StatArray[1] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::AGILITY, std::max(1, (int)(percent / 10)));
		break;
	case EStatName::VITALITY:
		percent = (statUp[2] * 100.0f) + (StatArray[2] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::VITALITY, std::max(1, (int)(percent / 10)));
		break;
	case EStatName::REASON:
		percent = (statUp[3] * 100.0f) + (StatArray[3] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::REASON, std::max(1, (int)(percent / 10)));
		break;
	case EStatName::INTUITION:
		percent = (statUp[4] * 100.0f) + (StatArray[4] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::INTUITION, std::max(1, (int)(percent / 10)));
		break;
	case EStatName::PERCEPTION:
		percent = (statUp[5] * 100.0f) + (StatArray[5] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::PERCEPTION, std::max(1, (int)(percent / 10)));
		break;
	case EStatName::LUCK:
		percent = (statUp[6] * 100.0f) + (StatArray[6] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::LUCK, std::max(1, (int)(percent / 10)));
		break;
	case EStatName::CHARISMA:
		percent = (statUp[7] * 100.0f) + (StatArray[7] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::CHARISMA, std::max(1, (int)(percent / 10)));
		break;
	case EStatName::EMPATHY:
		percent = (statUp[8] * 100.0f) + (StatArray[8] / 10.0f);
		if (percent >= rand() % 101)
			modStat(EStatName::EMPATHY, std::max(1, (int)(percent / 10)));
		break;
	}
	UE_LOG(LogTemp, Warning, TEXT("Percent: %f"), percent)
}

