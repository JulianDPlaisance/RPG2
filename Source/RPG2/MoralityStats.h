// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "MoralityStats.generated.h"

/**
 * 
 */

UENUM(Meta = (Bitflags))
enum class EMorality : uint8
{
	SELFLESS = 0x00 UMETA(DisplayName = "Selfless"),		//concerned more with the needs and wishes of others than with one's own
	SELFCASUAL = 0x01 UMETA(DisplayName = "Self Casual"),	//Gives concern to the needs of others when own needs have been met
	SELFISH = 0x02 UMETA(DisplayName = "Selfish"),		//lacking consideration for others; concerned chiefly with one's own personal profit or pleasure.
	INDIVIDUAL = 0x04 UMETA(DisplayName = "Individual"),	//a single human being as distinct from a group, class, or family.
	TEAM = 0x08 UMETA(DisplayName = "Team"),			//A team is a group of individuals working together to achieve their goal
	SOCIETY = 0x10 UMETA(DisplayName = "Societal"),		//the aggregate of people living together in a more or less ordered community  (Aggregate: a whole formed by combining several (typically disparate) elements.)

};
UCLASS()
class RPG2_API UMoralityStats : public UUserDefinedEnum
{
	GENERATED_BODY()
	
};
