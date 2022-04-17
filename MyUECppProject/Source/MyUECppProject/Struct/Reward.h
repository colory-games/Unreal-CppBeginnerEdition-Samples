// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Reward.generated.h"

USTRUCT(BlueprintType)
struct FReward
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 Exp = 50;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 Gold = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDropItem = false;
};
