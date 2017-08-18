#include "Vector2.h"

Vector2::Vector2()
	: mX(0)
	, mY(0)
{
}

Vector2::Vector2(int x, int y)
	: mX(x)
	, mY(y)
{
}

int Vector2::GetX() const
{
	return mX;
}

int Vector2::GetY() const
{
	return mY;
}

void Vector2::Add(const Vector2& vector)
{
	mX += vector.mX;
	mY += vector.mY;
}

void Vector2::SetX(int x)
{
	mX = x;
}

void Vector2::SetY(int y)
{
	mY = y;
}