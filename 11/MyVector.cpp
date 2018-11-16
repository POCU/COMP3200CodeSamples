#include "MyVector.h"

namespace samples
{
	MyVector::MyVector(int x, int y)
		: mX(x)
		, mY(y)
	{
	}

	int MyVector::GetX() const
	{
		return mX;
	}

	int MyVector::GetY() const
	{
		return mY;
	}
}
