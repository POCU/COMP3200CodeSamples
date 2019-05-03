#pragma once

namespace samples
{
	class Vector
	{
	public:
		Vector();
		Vector(int x, int y);

		inline int GetX() const;
		inline void SetX(int x);

		inline int GetY() const;
		inline void SetY(int y);

		inline bool IsEqual(const Vector& v) const;
		inline Vector Multiply(const Vector& v) const;
		inline Vector Multiply(int multiplier) const;

		inline void Scale(const Vector& v);
		inline void Scale(int multiplier);

	private:
		int mX;
		int mY;
	};

	int Vector::GetX() const
	{
		return mX;
	}

	void Vector::SetX(int x)
	{
		mX = x;
	}

	void Vector::SetY(int y)
	{
		mY = y;
	}

	int Vector::GetY() const
	{
		return mY;
	}

	bool Vector::IsEqual(const Vector& v) const
	{
		return (mX == v.mX && mY == v.mY);
	}

	Vector Vector::Multiply(const Vector& v) const
	{
		Vector result(mX * v.GetX(), mY * v.GetY());

		return result;
	}

	Vector Vector::Multiply(int multiplier) const
	{
		Vector result(mX * multiplier, mY * multiplier);

		return result;
	}

	void Vector::Scale(const Vector& v)
	{
		mX *= v.mX;
		mY *= v.mY;
	}

	void Vector::Scale(int multiplier)
	{
		mX *= multiplier;
		mY *= multiplier;
	}
}
