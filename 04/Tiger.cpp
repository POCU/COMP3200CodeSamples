#include <iostream>
#include "Tiger.h"

using namespace std;

namespace samples
{
	Tiger::Tiger(int age)
		: Animal(age)
	{
	}

	void Tiger::PretendIAmAZibra() const
	{
		cout << "I Has Zibra Stripes" << endl;
	}
}