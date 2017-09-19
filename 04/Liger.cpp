#include <iostream>
#include "Liger.h"

namespace samples
{
	Liger::Liger(int age)
		: Lion(age)
		, Tiger(age + 1)
	{
	}
}