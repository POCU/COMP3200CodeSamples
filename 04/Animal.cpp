#include <iostream>
#include "Animal.h"

namespace samples
{
	Animal::Animal(int age)
		: mAge(age)
	{
	}

	Animal::~Animal()
	{
	}

	void Animal::Move() const
	{
		std::cout << "An animal is moving" << std::endl;
	}

	void Animal::Speak() const
	{
		std::cout << "An animal is speaking" << std::endl;
	}

	int Animal::GetAge() const
	{
		return mAge;
	}
}
