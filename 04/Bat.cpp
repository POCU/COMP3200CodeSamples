#include <iostream>
#include "Bat.h"

namespace samples
{
	void Bat::Fly() const
	{
		std::cout << "A bat is flying" << std::endl;
	}

	void Bat::Walk() const
	{
		std::cout << "A bat is walking" << std::endl;
	}
}