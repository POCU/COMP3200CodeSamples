#include <iostream>
#include "Tiger.h"

using namespace std;

namespace samples
{
	Tiger::Tiger(int age)
		: Animal(age)
	{
	}

	void Tiger::PretendToBeZebra() const
	{
		cout << "I Has Zebra Stripes" << endl;
	}
}