#pragma once

#include "Animal.h"

namespace samples
{
	class Lion : public Animal
	{
	public:
		Lion(int age);

		void ShowOffBeautifulHair() const;
	};
}