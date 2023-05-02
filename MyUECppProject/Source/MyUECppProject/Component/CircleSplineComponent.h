/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#pragma once

#include "Components/SplineComponent.h"
#include "CoreMinimal.h"

#include "CircleSplineComponent.generated.h"

UCLASS()
class MYUECPPPROJECT_API UCircleSplineComponent : public USplineComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCircleSplineComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UPROPERTY(EditAnywhere)
	float Radius = 300.0f;

	UPROPERTY(EditAnywhere)
	int32 PointNum = 30;
};
