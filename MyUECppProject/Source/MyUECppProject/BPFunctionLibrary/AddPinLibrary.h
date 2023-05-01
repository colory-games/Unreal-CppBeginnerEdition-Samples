// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "AddPinLibrary.generated.h"

/**
 *
 */
UCLASS()
class MYUECPPPROJECT_API UAddPinLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta = (CommutativeAssociativeBinaryOperator = "true"))
	static FRotator CombineMultipleRotators(FRotator A, FRotator B);
};
