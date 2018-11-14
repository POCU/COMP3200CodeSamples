#pragma once

namespace samples
{
	template<typename T>
	class MyArray
	{
	public:
		MyArray();

		bool Add(const T& data);
		size_t GetSize() const;

	private:
		enum { MAX = 3 };

		size_t mSize;
		T mArray[MAX];
	};

	template<typename T>
	MyArray<T>::MyArray()
		: mSize(0)
	{
	}

	template<typename T>
	size_t MyArray<T>::GetSize() const
	{
		return mSize;
	}

	template<typename T>
	bool MyArray<T>::Add(const T& data)
	{
		if (mSize >= MAX)
		{
			return false;
		}

		mArray[mSize++] = data;

		return true;
	}
}