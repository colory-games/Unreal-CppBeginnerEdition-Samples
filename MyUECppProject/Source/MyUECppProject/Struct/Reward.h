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
