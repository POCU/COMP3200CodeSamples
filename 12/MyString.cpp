#include "MyString.h"

using namespace std;

namespace samples
{
	MyString::MyString(const char* str)
		: mSize(strlen(str) + 1)
	{
		mString = new char[mSize];
		memcpy(mString, str, mSize);
	}

	MyString::MyString(const MyString& other)
		: mSize(other.mSize)
	{
		cout << "Calling copy constructor" << endl;

		mString = new char[mSize];
		memcpy(mString, other.mString, mSize);
	}

	MyString::MyString(MyString&& other)
	{
		cout << "Calling move constructor" << endl;

		mString = other.mString;
		mSize = other.mSize;

		other.mString = nullptr;
		other.mSize = 0;
	}

	MyString::~MyString()
	{
		delete[] mString;
	}

	MyString & MyString::operator=(MyString&& other)
	{
		cout << "Calling move assignment" << endl;

		if (this != &other)
		{
			delete[] mString;

			mString = other.mString;
			mSize = other.mSize;

			other.mString = nullptr;
			other.mSize = 0;
		}

		return *this;
	}

	const char* MyString::GetString() const
	{
		return mString;
	}

	int MyString::GetSize() const
	{
		return mSize;
	}

	ostream& operator<<(ostream& os, const MyString& rhs)
	{
		for (int i = 0; i < rhs.mSize; i++)
		{
			os << rhs.mString[i];
		}
		
		return os;
	}
}
