#include <cstring>

#include "Cat.h"

namespace samples
{
	Cat::Cat(int age, char* name)
		: Animal(age)
	{
		mName = new char[strlen(name) + 1];
		memcpy(mName, name, strlen(name) + 1);
	}

	Cat::~Cat()
	{
		delete[] mName;
	}

	const char* Cat::GetName() const
	{
		return mName;
	}
}