// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoralityStats.h"
#include "BaseStats.h"
#include <algorithm>
#include "StatHolder.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPG2_API UStatHolder : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatHolder();
	UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, meta = (DisplayName = "Level", Category = "Stat"))
		int level = 1;
	UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, meta = (DisplayName = "Exp", Category = "Stat"))
		int experience = 0;
	UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, meta = (DisplayName = "HP", Category = "Stat"))
		int HP = 10;
	UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, meta = (DisplayName = "Weapon Skill", Category = "Stat"))
		float WeaponSkill = 0.9f;
	UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, meta = (DisplayName = "Stat Array", Category = "Stat"))
		TArray<int32> StatArray =
	{
		10, //Strength
		10, //Agility
		10, //Vitality
		10, //Reason
		10, //Intuition
		10, //Perception
		10, //Luck
		10, //Charisma
		10  //Empathy
	};
	UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, meta = (DisplayName = "Percentage-Up Array", Category = "Stat"))
		TArray<float> statUp =
	{
		0.1, //Str
		0.1, //Agi
		0.1, //Vit
		0.1, //Rea
		0.1, //Int
		0.1, //Per
		0.1, //Luc
		0.1, //Cha
		0.1  //Emp
	};
	UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, meta = (DisplayName = "Morality Array", Category = "Stat"))
		TArray<int32> MoralityArray =
	{
		10, //Selfless
		10, //Self Casual
		10, //Selfish
		10, //Individual
		10, //Team
		10  //Society
	};

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		int32 getLevel() { return level; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		int32 getExperience() { return experience; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		int32 getHP() { return HP; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		float getWeaponSkill() { return WeaponSkill; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		int32 getStat(EStatName StatToGet) { return StatArray[(uint8)StatToGet % 9]; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		float getStatUp(EStatName StatToGet) { return statUp[(uint8)StatToGet % 9]; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		int32 getMoral(EMorality MoralToGet) { return MoralityArray[(uint8)MoralToGet]; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void setLevel(int32 val) { level = val; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void setExperience(int32 val) { experience = val; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void setHP(int32 val) { HP = val; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void setWeaponSkill(float val) { WeaponSkill = val; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void setStat(EStatName StatToSet, int32 val) { StatArray[(uint8)StatToSet % 9] = val; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void setStatUp(EStatName StatToSet, float val) { statUp[(uint8)StatToSet % 9] = val; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void setMoral(EMorality MoralToSet, int32 val) { MoralityArray[(uint8)MoralToSet] = val; }
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void addLevel(int32 val);
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void addExperience(int32 val);
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void addHP(int32 val);
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void addWeaponSkill(float val);
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void modStat(EStatName StatToMod, int32 amt);
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void modStatUp(EStatName StatToMod, float amt);
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void modMoral(EMorality MoralToMod, int32 amt);
	UFUNCTION(BlueprintCallable, meta = (Category = "Stat"))
		void bRaiseStat(EStatName StatToMod);
		
};
