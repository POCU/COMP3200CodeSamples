#include <iostream>
#include <iomanip>

#include "ValueCastingExample.h"

using namespace std;

namespace samples
{
	void ValueCastingExample()
	{
		const int intNumber = 10;

		const float floatNumber = static_cast<float>(intNumber);
		const int shortNumber = static_cast<short>(intNumber);

		cout << showbase << hex << uppercase;
		cout << "int: " << intNumber
			<< ", short: " << shortNumber
			<< endl;
		cout << "int: " << intNumber
			<< ", float: " << *(int*)(&floatNumber)
			<< endl;
	}
}