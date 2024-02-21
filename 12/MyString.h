#pragma once

#include <iostream>

using namespace std;

namespace samples
{
	class MyString
	{
	public:
		MyString() = delete;
		MyString(const char* str);
		MyString(const MyString& other);
		MyString(MyString&& other);
		virtual ~MyString();

		MyString& operator=(MyString&& other);
		const char* GetString() const;
		int GetSize() const;

		friend ostream& operator<<(ostream& os, const MyString& rhs);

	private:
		char* mString;
		int mSize;
	};
}
