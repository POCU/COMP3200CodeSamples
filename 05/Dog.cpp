#include <cstring>

#include "Dog.h"

namespace samples
{
	Dog::Dog(int age, char* address)
		: Animal(age)
	{
		mHomeAddress = new char[strlen(address) + 1];
		memcpy(mHomeAddress, address, strlen(address) + 1);
	}

	Dog::~Dog()
	{
		delete[] mHomeAddress;
	}

	const char* Dog::GetAddress() const
	{
		return mHomeAddress;
	}
}