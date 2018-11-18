#include "MyVector2D.h"

namespace samples
{
	MyVector2D::MyVector2D(int x, int y)
		: mX(x)
		, mY(y)
	{
	}
	int MyVector2D::GetX() const
	{
		return mX;
	}
	int MyVector2D::GetY() const
	{
		return mY;
	}
}