/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#pragma once

#include "../Enum/MovePattern.h"
#include "CoreMinimal.h"

#include "MoveParam.generated.h"

USTRUCT(BlueprintType)
struct FMoveParam
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EMovePattern Pattern;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "Pattern != EMovePattern::Static"))
	FVector Speed;

	UPROPERTY(EditAnywhere, meta = (InlineEditConditionToggle))
	bool bLookTarget;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "bLookTarget"))
	TObjectPtr<AActor> TargetActor;
};
