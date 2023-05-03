// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "DataTypeLibrary.generated.h"

/**
 *
 */
UCLASS()
class MYUECPPPROJECT_API UDataTypeLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static void ComponentWiseSquared(FVector In, FVector& Out);

	UFUNCTION(BlueprintCallable)
	static void AddRotationAngle(FRotator In, double X, double Y, double Z, FRotator& Out);

	UFUNCTION(BlueprintCallable)
	static void MakeDifference(const FTransform& In1, const FTransform& In2, FTransform& Out);

	UFUNCTION(BlueprintCallable)
	static void RepeatString(const FString& StringToRepeat, int32 RepeatCount, FString& Out);

	UFUNCTION(BlueprintCallable)
	static int32 Sum(const TArray<int32>& Data);

	UFUNCTION(BlueprintCallable)
	static void MakeUnique(const TArray<FString>& In, TArray<FString>& Out);

	UFUNCTION(BlueprintCallable)
	static void MakeSquared(const TArray<int32>& Data, TMap<int32, int32>& Out);

	UFUNCTION(BlueprintCallable)
	static void DistanceFromActor(AActor* InActor, FVector Location, double& Distance);
};
