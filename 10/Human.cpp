#include <iostream>
#include "Human.h"

using namespace std;

namespace samples
{
	Human::Human(const char* name)
		: mName(std::string(name))
	{
	}

	void Human::SayMyName() const
	{
		cout << "My name is: " << mName << endl;
	}
}
