#pragma once

#include <string>
#include "Animal.h"

namespace samples
{
	class Cat : public Animal
	{
	public:
		Cat(int age);

		std::string Purr() const;
	};
}