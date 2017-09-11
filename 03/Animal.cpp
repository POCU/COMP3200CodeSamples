#include <iostream>
#include "Animal.h"

namespace samples
{
	Animal::Animal()
		: Animal(0)
	{
	}

	Animal::Animal(int age)
		: mAge(age)
	{
	}

	int Animal::GetAge() const
	{
		return mAge;
	}
}