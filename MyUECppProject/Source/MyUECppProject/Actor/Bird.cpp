/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "Bird.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
ABird::ABird()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualField = CreateDefaultSubobject<UBoxComponent>(TEXT("VisualField"));
	RootComponent = VisualField;

	FlightBooster = CreateDefaultSubobject<UBoosterComponent>(TEXT("FlightBooster"));
}

// Called when the game starts or when spawned
void ABird::BeginPlay()
{
	Super::BeginPlay();

	Vitality = VitalityMax;
	InstanceID = UKismetMathLibrary::RandomInteger(100000);
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
	Vitality = Vitality - Amount;

	if (Vitality < 0)
	{
		Vitality = 0;
	}
}

void ABird::Cure(int32 Amount)
{
	Vitality = Vitality + Amount;

	if (Vitality > VitalityMax)
	{
		Vitality = VitalityMax;
	}
}

int32 ABird::GetVitality() const
{
	return Vitality;
}

double ABird::GetWalkingSpeed() const
{
	return UKismetMathLibrary::FMin(10.0 - 0.01 * Weight, 5.0);
}

double ABird::GetFlightSpeed() const
{
	if (!bFlyable)
	{
		return 0.0;
	}

	return UKismetMathLibrary::FMin(50.0 - 0.05 * Weight, 25.0) + FlightBooster->GetVelocity();
}
