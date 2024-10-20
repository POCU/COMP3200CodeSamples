#pragma once

#include "Animal.h"

namespace samples
{
	class Tiger : public Animal
	{
	public:
		Tiger::Tiger(int age);

		void PretendToBeZebra() const;
	};
}