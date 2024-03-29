/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "CircleSplineComponent.h"

// Sets default values for this component's properties
UCircleSplineComponent::UCircleSplineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UCircleSplineComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UCircleSplineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

#if WITH_EDITOR
void UCircleSplineComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	ClearSplinePoints();
	for (int32 i = 0; i < PointNum; i++)
	{
		double Angle = 2.0 * PI / PointNum * i;
		FVector PointLocation = FVector(Radius * sin(Angle), Radius * cos(Angle), 0.0);
		AddSplinePointAtIndex(PointLocation, i, ESplineCoordinateSpace::Local, true);
	}
	SetClosedLoop(false, true);
}
#endif
