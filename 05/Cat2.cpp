#include <iostream>
#include "Cat2.h"

namespace samples
{
	Cat2::Cat2(int age, char* name)
		: mAge(age)
		, mName(name)
	{
		mName = new char[strlen(name) + 1];
		memcpy(mName, name, strlen(name) + 1);
	}

	Cat2::~Cat2()
	{
		delete[] mName;
	}

	// static function
	char* Cat2::GetType()
	{
		return mAnimalType;
	}

	char* Cat2::mAnimalType = "Cat";
}