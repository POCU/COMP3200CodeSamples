#include "IntVector.h"

namespace samples
{
	IntVector::IntVector()
		: IntVector(0, 0)
	{
	}

	IntVector::IntVector(int x, int y)
		: mX(x)
		, mY(y)
	{
	}
}