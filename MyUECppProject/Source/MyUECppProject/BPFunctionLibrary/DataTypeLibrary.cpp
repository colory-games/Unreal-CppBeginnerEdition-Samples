// Fill out your copyright notice in the Description page of Project Settings.

#include "DataTypeLibrary.h"

#include "Kismet/KismetMathLibrary.h"

void UDataTypeLibrary::ComponentWiseSquared(FVector In, FVector& Out)
{
	Out = In * In;
}

void UDataTypeLibrary::AddRotationAngle(FRotator In, double X, double Y, double Z, FRotator& Out)
{
	Out.Roll = In.Roll + X;
	Out.Pitch = In.Pitch + Y;
	Out.Yaw = In.Yaw + Z;
}

void UDataTypeLibrary::MakeDifference(const FTransform& In1, const FTransform& In2, FTransform& Out)
{
	Out.SetLocation(In1.GetLocation() - In2.GetLocation());
	Out.SetRotation(In1.GetRotation() - In2.GetRotation());
	Out.SetScale3D(In1.GetScale3D() - In2.GetScale3D());
}

void UDataTypeLibrary::RepeatString(const FString& StringToRepeat, int32 RepeatCount, FString& Out)
{
	Out = "";

	for (int32 i = 1; i <= RepeatCount; i++)
	{
		Out = Out + StringToRepeat;
	}
}

int32 UDataTypeLibrary::Sum(const TArray<int32>& Data)
{
	int32 Value = 0;

	for (int32 D : Data)
	{
		Value += D;
	}

	return Value;
}

void UDataTypeLibrary::MakeUnique(const TArray<FString>& In, TArray<FString>& Out)
{
	Out.Empty();

	TSet<FString> Unique(In);
	Out = Unique.Array();
}

void UDataTypeLibrary::MakeSquared(const TArray<int32>& Data, TMap<int32, int32>& Out)
{
	Out.Empty();

	for (int32 D : Data)
	{
		Out.Add(D, D * D);
	}
}

void UDataTypeLibrary::DistanceFromActor(AActor* InActor, FVector Location, double& Distance)
{
	if (InActor)
	{
		Distance = (InActor->GetActorLocation() - Location).Size();
	}
}
