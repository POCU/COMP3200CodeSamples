#pragma once

namespace samples
{
	namespace Math
	{
		template <typename T>
		inline T Add(T value1, T value2)
		{
			return value1 + value2;
		}
		
		template <typename T>
		inline T Divide(T value1, T value2)
		{
			return value1 / value2;
		}
		
		template <typename T>
		inline T Max(T value1, T value2)
		{
			return value1 < value2 ? value2 : value1;
		}
		
		template <typename T>
		inline T Multiply(T value1, T value2)
		{
			return value1 * value2;
		}
		
		template <typename T>
		inline T Min(T value1, T value2)
		{
			return value1 < value2 ? value1 : value2;
		}
	}
}