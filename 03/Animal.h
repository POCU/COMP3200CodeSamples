#pragma once

namespace samples
{
	class Animal
	{
	public:
		Animal();
		Animal(int age);

		int GetAge() const;

	private:
		int mAge;
	};
}