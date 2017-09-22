#include <iostream>
#include "Liger.h"

namespace samples
{
	Liger::Liger(int age)
		: Lion(age)
		, Tiger(2 * age)
	{
	}
}