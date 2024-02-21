#pragma once

#include "Animal.h"

namespace samples
{
	class Dog : public Animal
	{
	public:
		Dog(int age, const char* address);
		virtual ~Dog();

		const char* GetAddress() const;

	private:
		char* mHomeAddress;
	};
}