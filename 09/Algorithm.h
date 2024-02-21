#include <iostream>

#pragma once

namespace samples
{
	namespace Algorithm
	{
		template <typename ITER, typename T>
		const ITER* Find(const ITER* begin, const ITER* end, const T& value)
		{
			const ITER* p = begin;
			while (p != end)
			{
				if (*p == value)
				{
					break;
				}
				++p;
			}

			return p;
		}
	};
};