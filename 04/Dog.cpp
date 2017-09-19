#include <iostream>
#include "Dog.h"

namespace samples
{
	Dog::Dog(int age)
		: Animal(age)
	{
	}

	void Dog::Move() const
	{
		std::cout << "A dog is moving" << std::endl;
	}

	void Dog::Speak() const
	{
		std::cout << "Woof " << std::endl;
	}
}