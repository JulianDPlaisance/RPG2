// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <RPG2\StatHolder.h>
#include <RPG2\BaseWeapon.h>
#include "BaseCharacter.generated.h"

UCLASS()
class RPG2_API ABaseCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseCharacter();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (DisplayName = "Stats Holder", Category = "Char_Stat"))
	UStatHolder* stat;
	//UBaseWeapon weapon;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getAttackChance(ABaseCharacter* other);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getEvadeChance(ABaseCharacter* other);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getCritChance(ABaseCharacter* other);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		int getAvoidCritChance(ABaseCharacter* other);
	UFUNCTION(BlueprintCallable, meta = (Category = "Char_Battle"))
		TArray<int> getMorals(ABaseCharacter* other);
};
