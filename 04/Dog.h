#pragma once

#include "Animal.h"

namespace samples 
{
	class Dog : public Animal
	{
	public:
		Dog(int age);

		virtual void Move() const;
		virtual void Speak() const;
	};
}