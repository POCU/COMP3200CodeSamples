#include <iostream>
#include "Cat.h"

using namespace std;

namespace samples
{
	Cat::Cat(int age)
		: Animal(age)
	{
	}

	string Cat::Purr() const
	{
		return string("Purr");
	}
}