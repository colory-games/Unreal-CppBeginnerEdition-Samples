// Fill out your copyright notice in the Description page of Project Settings.

#include "Bird.h"

#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ABird::ABird()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InstanceID = UKismetMathLibrary::RandomInteger(100000);
}

// Called when the game starts or when spawned
void ABird::BeginPlay()
{
	Super::BeginPlay();

	Vitality = VitalityMax;
}

// Called every frame
void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPoisoned)
	{
		Damage(1);
	}
	else
	{
		Cure(1);
	}
}

void ABird::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (bFlyable)
	{
		BirdID = 0;
	}
	else
	{
		BirdID = 1;
	}
}

void ABird::Damage(int32 Amount)
{
	Vitality -= Amount;

	if (Vitality < 0)
	{
		Vitality = 0;
	}
}

void ABird::Cure(int32 Amount)
{
	Vitality += Amount;

	if (Vitality > VitalityMax)
	{
		Vitality = VitalityMax;
	}
}

int32 ABird::GetVitality() const
{
	return Vitality;
}

float ABird::GetWalkingSpeed() const
{
	return UKismetMathLibrary::FMax(10.0f - 0.01f * Weight, 5.0f);
}

float ABird::GetFlightSpeed() const
{
	if (!bFlyable)
	{
		return 0.0f;
	}

	return UKismetMathLibrary::FMax(50.0f - 0.05f * Weight, 25.0f) + FlightBooster->GetOutput();
}
