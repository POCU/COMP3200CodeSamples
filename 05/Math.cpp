#include <iostream>
#include "Math.h"

namespace samples
{
	int Math::Ceil(float value)
	{
		int intValue = static_cast<int>(value);
		if (value == static_cast<float>(intValue))
		{
			return intValue;
		}
		return intValue + 1;	
	}

	int Math::Floor(float value)
	{
		return static_cast<int>(value);
	}

	float Math::Power(float value, float power)
	{
		return pow(value, power);
	}

	int Math::Round(float value)
	{
		return static_cast<int>(value + 0.5f);
	}

	float Math::Square(float value)
	{
		return value * value;
	}
}