#pragma once

#include "Animal.h"

namespace samples
{
	class Tiger : public samples::Animal
	{
	public:
		Tiger::Tiger(int age);

		void PretendIAmAZibra() const;
	};
}