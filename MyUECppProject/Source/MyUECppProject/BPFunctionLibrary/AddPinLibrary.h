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
