#pragma once

namespace samples
{
	class Cat2
	{
	public:
		Cat2::Cat2(int age, char* name);
		virtual ~Cat2();

		static char* GetType();

	private:
		static char* mAnimalType;

		int mAge;
		char* mName;
	};
}