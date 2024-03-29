/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "MathLibrary.h"

#include "Kismet/KismetMathLibrary.h"

double UMathLibrary::Add(double A, double B)
{
	double C;

	C = A + B;

	return C;
}

void UMathLibrary::Divide(int32 A, int32 B, int32& Quotient, int32& Remainder)
{
	Quotient = A / B;
	Remainder = A % B;
}

void UMathLibrary::AddRef(UPARAM(ref) double& A, double B)
{
	A = A + B;
}

double UMathLibrary::AddCompact(double A, double B)
{
	double C;

	C = A + B;
	return C;
}

double UMathLibrary::Clamp(double Value, double Min, double Max)
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

	for (int32 i = 1; i <= N; i++)
	{
		Out = Out + i;
	}

	return Out;
}

void UMathLibrary::MinMax(double A, double B, double C, double& Min, double& Max)
{
	Min = UKismetMathLibrary::FMin(UKismetMathLibrary::FMin(A, B), C);
	Max = UKismetMathLibrary::FMax(UKismetMathLibrary::FMax(A, B), C);
}
