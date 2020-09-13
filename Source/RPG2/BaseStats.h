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
// natural 1-7; next 8-14; natural 15-21; previous 22-28; special 29-31[rule breaking, i.e. Feb 28th]
// fire, water, ice, earth, lightning, music
// divine, cosmic
/*  
*   Jan A: Ice,         X: Earth,       P: Music,       S: Fire
*   Feb A: Earth,       X: Water,       P: Ice,         S: Divine [28th]
*   Mar A: Water,       X: Lightning,   P: Earth,       S: Fire
*   Apr A: Lightning,   X: Earth,       P: Water,       S: Divine [1st, otherwise X]
*   May A: Earth,       X: Music,       P: Lightning,   S: Water
*   Jun A: Music,       X: Fire,        P: Earth,       S: Ice
*   Jul A: Fire,        X: Earth,       P: Music,       S: Ice
*   Aug A: Earth,       X: Earth,       P: Fire,        S: Fire
*   Sep A: Earth,       X: Cosmic,      P: Earth,       S: Water
*   Oct A: Cosmic,      X: Water,       P: Earth,       S: Divine [25th-31st]
*   Nov A: Water,       X: Music,       P: Cosmic,      S: Lightning
*   Dec A: Music,       X: Ice,         P: Water,       S: Divine [24th-30th]
*/ 
