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

#include "Element.generated.h"

UENUM(BlueprintType)
enum class EElement : uint8
{
	Elem_Fire = 0 UMETA(DisplayName = "Fire"),
	Elem_Water = 1 UMETA(DisplayName = "Water"),
	Elem_Thunder = 2 UMETA(DisplayName = "Thunder"),
	Elem_Wind = 3 UMETA(DisplayName = "Wind"),
};
