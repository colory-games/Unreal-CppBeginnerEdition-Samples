// Fill out your copyright notice in the Description page of Project Settings.

#include "AddPinLibrary.h"

#include "Kismet/KismetMathLibrary.h"

FRotator UAddPinLibrary::CombineMultipleRotators(FRotator A, FRotator B)
{
	FRotator Out;

	Out = UKismetMathLibrary::ComposeRotators(A, B);

	return Out;
}
