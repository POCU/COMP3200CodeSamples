#pragma once

#include "Lion.h"
#include "Tiger.h"

namespace samples
{
	class Liger : public Lion, public Tiger
	{
	public:
		Liger(int age);
	};
}
