#pragma once

namespace samples
{
	template<typename T, size_t N>
	class FixedVector
	{
	public:
		FixedVector();

		int Add(const T& data);
		size_t GetSize() const;
		size_t GetCapacity() const;

	private:
		size_t mSize;
		T mArray[N];
	};

	template<typename T, size_t N>
	FixedVector<T, N>::FixedVector()
		: mSize(0)
	{
	}

	template<typename T, size_t N>
	size_t FixedVector<T, N>::GetSize() const
	{
		return mSize;
	}

	template<typename T, size_t N>
	size_t FixedVector<T, N>::GetCapacity() const
	{
		return N;
	}

	template<typename T, size_t N>
	bool FixedVector<T>::Add(const T& data)
	{
		if (mSize >= N)
		{
			return false;
		}

		mArray[mSize++] = data;

		return true;
	}
}
