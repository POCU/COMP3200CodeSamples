#include <iostream>
#include "Cat2.h"

namespace samples
{
	const char* Cat2::mAnimalType = "Cat";

	Cat2::Cat2(int age, const char* name)
		: mAge(age)
	{
		mName = new char[strlen(name) + 1];
		memcpy(mName, name, strlen(name) + 1);
	}

	Cat2::~Cat2()
	{
		delete[] mName;
	}

	// static function
	const char* Cat2::GetType()
	{
		return mAnimalType;
	}
}