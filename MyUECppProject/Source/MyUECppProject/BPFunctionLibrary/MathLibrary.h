/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

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
	static double Add(double A, double B);

	UFUNCTION(BlueprintCallable)
	static double Clamp(double Value, double Min, double Max);

	UFUNCTION(BlueprintCallable)
	static int32 Accumulate(int32 N);

	UFUNCTION(BlueprintCallable)
	static void Divide(int32 A, int32 B, int32& Quotient, int32& Remainder);

	UFUNCTION(BlueprintCallable)
	static void AddRef(UPARAM(ref) double& A, double B);

	UFUNCTION(BlueprintCallable)
	static void MinMax(double A, double B, double C, double& Min, double& Max);

	UFUNCTION(BlueprintPure, Category = "Math", meta = (CompactNodeTitle = "Clamp"))
	static double ClampCompact(double Value, double Min, double Max);
};
