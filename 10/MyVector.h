#pragma once

namespace samples
{
	template<typename T>
	class MyVector
	{
	public:
		MyVector(T x, T y);

		T GetX() const;
		T GetY() const;

	private:
		T mX;
		T mY;
	};

	template<typename T>
	MyVector<T>::MyVector(T x, T y)
		: mX(x)
		, mY(y)
	{
	}

	template<typename T>
	T MyVector<T>::GetX() const
	{
		return mX;
	}

	template<typename T>
	T MyVector<T>::GetY() const
	{
		return mY;
	}
}
