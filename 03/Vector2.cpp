#include "Vector2.h"

namespace samples
{
	Vector2::Vector2()
		: Vector2(0, 0)
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

	void Vector2::SetX(int x)
	{
		mX = x;
	}

	void Vector2::SetY(int y)
	{
		mY = y;
	}

	bool Vector2::operator==(const Vector2& rhs) const
	{
		return (mX == rhs.mX && mY == rhs.mY);
	}

	int Vector2::GetY() const
	{
		return mY;
	}

	Vector2 Vector2::operator*(const Vector2& rhs) const
	{
		Vector2 result(mX * rhs.mX, mY * rhs.mY);

		return result;
	}

	Vector2 Vector2::operator*(int multiplier) const
	{
		Vector2 result(mX * multiplier, mY * multiplier);

		return result;
	}

	Vector2 operator*(int multiplier, const Vector2& v)
	{
		Vector2 result(v.mX * multiplier, v.mY * multiplier);

		return result;
	}

	Vector2& Vector2::operator*=(const Vector2& rhs)
	{
		mX *= rhs.mX;
		mY *= rhs.mY;
		
		return *this;
	}

	Vector2& Vector2::operator*=(int multiplier)
	{
		mX *= multiplier;
		mY *= multiplier;

		return *this;
	}

	std::ostream& operator<<(std::ostream& out, const Vector2& v)
	{
		out << v.mX << ", " << v.mY << std::endl;
		
		return out;
	}
}