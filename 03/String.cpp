#include <iostream>
#include <string>
#include "String.h"

using namespace std;

namespace samples
{
	String::String(const char* str)
		: mSize(strlen(str) + 1)
	{
		mString = new char[mSize];
		memcpy(mString, str, mSize);
	}

	String::String(const String& str)
		: mSize(str.mSize)
	{
		mString = new char[mSize];
		memcpy(mString, str.mString, mSize);
	}

	String::~String()
	{
		delete[] mString;
	}

	void String::Print()
	{
		cout << "Member string : " << mString << endl;
	}
}