#include <iostream>

#pragma once

namespace samples
{
	namespace Algorithm
	{
		template <typename Input, typename T>
		Input* Find(Input* first, Input* last, const T& value)
		{
			while (first != last)
			{
				if (*first == value)
				{
					return first;
				}
				++first;
			}
			return last;
		}
	};
};