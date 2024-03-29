/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "BoosterComponent.h"

// Sets default values for this component's properties
UBoosterComponent::UBoosterComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UBoosterComponent::BeginPlay()
{
	Super::BeginPlay();

	FuelRest = FuelMax;
}

// Called every frame
void UBoosterComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bEnabled)
	{
		FuelRest -= DeltaTime;
		if (FuelRest < 0.0)
		{
			FuelRest = 0.0;
		}
	}
}

double UBoosterComponent::GetVelocity() const
{
	if (bEnabled && FuelRest > 0.0)
	{
		return Power;
	}

	return 0.0;
}
