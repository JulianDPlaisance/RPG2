// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "BaseStats.generated.h"

/**
 * 
 */

UENUM(Meta = (Bitflags))
enum class EStatName : uint8
{
    STRENGTH = 0x00 UMETA(DisplayName = "Str"), //the capacity of an object or substance to withstand great force or pressure.
    AGILITY = 0x01 UMETA(DisplayName = "Agi"), //ability to move quickly and easily. && ability to think and understand quickly.
    VITALITY = 0x02 UMETA(DisplayName = "Vit"), //the power giving continuance of life, present in all living things.
    REASON = 0x04 UMETA(DisplayName = "Rea"), //the power of the mind to think, understand, and form judgments by a process of logic
    INTUITION = 0x08 UMETA(DisplayName = "Int"), //the ability to understand something immediately, without the need for conscious reasoning.
    PERCEPTION = 0x10 UMETA(DisplayName = "Per"), //the state of being or process of becoming aware of something through the senses
    LUCK = 0x20 UMETA(DisplayName = "Luc"), //success or failure apparently brought by chance rather than through one's own actions.
    CHARISMA = 0x40 UMETA(DisplayName = "Cha"), //compelling attractiveness or charm that can inspire devotion in others
    EMPATHY = 0x80 UMETA(DisplayName = "Emp")  //the ability to understand and share the feelings of another.

};
UCLASS()
class RPG2_API UBaseStats : public UUserDefinedEnum
{
	GENERATED_BODY()
	
};
