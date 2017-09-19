#include <iostream>
#include "Lion.h"

using namespace std;

namespace samples
{
	Lion::Lion(int age)
		: Animal(age)
	{
	}

	void Lion::ShowOffBeautifulHair() const
	{
		cout << "I'm too sexy" << endl;
	}
}
