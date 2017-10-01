#pragma once

namespace samples
{
	class Animal
	{
	public:
		Animal(int age);
		virtual ~Animal() {};

	private:
		int mAge;
	};
}