#include <iostream>
#include "PrintAll.h"

using namespace std;

namespace samples
{
	void PrintEverythingExample()
	{
		int integer = 10;
		float decimal = 1.5f;
		char letter = 'A';
		char string[] = "Hello, world!";

		cout << integer << endl;
		cout << decimal << endl;
		cout << letter << endl
			<< string << endl;
	}
}
