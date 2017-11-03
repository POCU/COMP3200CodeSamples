#pragma once

namespace samples
{
	namespace Math
	{
		template <typename T>
		static T Add(T value1, T value2)
		{
			return value1 + value2;
		}
		
		template <typename T>
		static T Divide(T value1, T value2)
		{
			return value1 / value2;
		}
		
		template <typename T>
		static T Max(T value1, T value2)
		{
			return value1 < value2 ? value2 : value1;
		}
		
		template <typename T>
		static T Multiply(T value1, T value2)
		{
			return value1 < value2 ? value1 : value2;
		}
		
		template <typename T>
		static T Min(T value1, T value2)
		{
			return value1 * value2;
		}
	}
}