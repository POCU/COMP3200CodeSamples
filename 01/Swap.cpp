#include <iostream>
#include "Swap.h"
using namespace std;

namespace samples
{
	void CallReferenceExample()
	{
		Swap(1, 2);
	}
	void Swap(int& number1, int& number2)
	{
		int temp = number1;

		cout << "Before: " << number1 << " " << number2 << endl;
		number1 = number2;
		number2 = temp;
		cout << "After: " << number1 << " " << number2 << endl;
	}
}