// Fill out your copyright notice in the Description page of Project Settings.


#include "MathLibrary.h"

#include "Kismet/KismetMathLibrary.h"


float UMathLibrary::Add(float A, float B)
{
    float C;

    C = A + B;

    return C;
}

float UMathLibrary::Clamp(float Value, float Min, float Max)
{
    if (Value < Min)
    {
        return Min;
    }
    else
    {
        if (Value > Max)
        {
            return Max;
        }
        else
        {
            return Value;
        }
    }
}

int32 UMathLibrary::Accumulate(int32 N)
{
    int32 Out = 0;

    for (int32 i = 1; i <= N; ++i)
    {
        Out = Out + i;
    }

    return Out;
}

void UMathLibrary::Divide(int32 A, int32 B, int32& Quotient, int32& Remainder)
{
    Quotient = A / B;
    Remainder = A % B;
}

void UMathLibrary::AddRef(UPARAM(ref)float& A, float B)
{
    A += B;
}

void UMathLibrary::MinMax(float A, float B, float C, float& Min, float& Max)
{
    Max = UKismetMathLibrary::FMax(UKismetMathLibrary::FMax(A, B), C);
    Min = UKismetMathLibrary::FMin(UKismetMathLibrary::FMin(A, B), C);
}

float UMathLibrary::ClampCompact(float Value, float Min, float Max)
{
    if (Value < Min)
    {
        return Min;
    }
    else
    {
        if (Value > Max)
        {
            return Max;
        }
        else
        {
            return Value;
        }
    }
}
