#include <iostream>
#include "Vector1.h"
#include "VectorExample1.h"

using namespace std;

namespace samples
{
	void VectorExample1()
	{
		cout << "+------------------------------+" << endl;
		cout << "|       Vector Example 1       |" << endl;
		cout << "+------------------------------+" << endl;

		Vector1 v1;
		Vector1 v2(10, 55);
	}
}