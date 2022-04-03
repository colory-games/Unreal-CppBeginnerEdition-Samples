// Fill out your copyright notice in the Description page of Project Settings.


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
	for (int32 i = 0; i < PointNum; i++) {
		float PointAngle = 2.0f * PI / PointNum * i;
		FVector PointLocation = FVector(Radius * sin(PointAngle), Radius * cos(PointAngle), 0.0f);
		AddSplinePointAtIndex(PointLocation, i, ESplineCoordinateSpace::Local, true);
	}
	SetClosedLoop(false, true);
}
#endif
