// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathLibrary.generated.h"

/**
 *
 */
UCLASS()
class MYUECPPPROJECT_API UMathLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static float Add(float A, float B);

	UFUNCTION(BlueprintCallable)
	static float Clamp(float Value, float Min, float Max);

	UFUNCTION(BlueprintCallable)
	static int32 Accumulate(int32 N);

	UFUNCTION(BlueprintCallable)
	static void Divide(int32 A, int32 B, int32& Quotient, int32& Remainder);

	UFUNCTION(BlueprintCallable)
	static void AddRef(UPARAM(ref)float& A, float B);

	UFUNCTION(BlueprintCallable)
	static void MinMax(float A, float B, float C, float& Min, float& Max);

	UFUNCTION(BlueprintPure, Category = "Math", meta = (CompactNodeTitle = "Clamp"))
	static float ClampCompact(float Value, float Min, float Max);
};
