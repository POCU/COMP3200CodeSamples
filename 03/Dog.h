#pragma once

#include <string>
#include "Animal.h"

namespace samples
{
	class Dog : public Animal
	{
	public:
		Dog(int age);

		std::string Bark() const;
	};
}