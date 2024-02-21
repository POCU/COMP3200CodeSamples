#pragma once

namespace samples
{
	class Cat2
	{
	public:
		Cat2(int age, const char* name);
		virtual ~Cat2();

		static const char* GetType();

	private:
		static const char* mAnimalType;

		int mAge;
		char* mName;
	};
}