#include <iostream>
#include "Vector.h"

namespace samples
{
	Vector::Vector()
		: Vector(0, 0)
	{
	}

	Vector::Vector(int x, int y)
		: mX(x)
		, mY(y)
	{
	}
}
