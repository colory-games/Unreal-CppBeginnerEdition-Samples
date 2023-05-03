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

#include "MovePattern.generated.h"

UENUM()
enum class EMovePattern : uint8
{
	Static,
	Walk,
	Run
};
