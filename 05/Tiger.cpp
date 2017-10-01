#include <iostream>
#include "Tiger.h"

namespace samples
{
	Tiger::Tiger(int age)
		: mAge(age)
	{
	}

	void Tiger::PretendIAmAZibra() const
	{
		std::cout << "I Has Zibra Stripes" << std::endl;
	}
}