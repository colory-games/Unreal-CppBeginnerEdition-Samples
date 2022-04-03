// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Enum/MovePattern.h"
#include "MoveParam.generated.h"


USTRUCT(BlueprintType)
struct FMoveParam
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	EMovePattern Pattern;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "Pattern != EMovePattern::Static"))
	FVector Speed;

	UPROPERTY(EditAnywhere, meta = (InlineEditConditionToggle))
	bool bLookTarget;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "bLookTarget"))
	AActor* TargetActor;
};
