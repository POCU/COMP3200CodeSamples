#pragma once

namespace samples
{

	template<class T>
	class MyArray
	{
	public:
		MyArray();

		int Add(const T& data);
		size_t GetSize() const;

	private:
		enum { MAX = 3 };

		size_t mSize;
		T mArray[MAX];
	};

	template<class T>
	MyArray<T>::MyArray()
		: mSize(0)
	{
	}

	template<class T>
	size_t MyArray<T>::GetSize() const
	{
		return mSize;
	}

	template<class T>
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