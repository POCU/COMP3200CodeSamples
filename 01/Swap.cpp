#include <iostream>
#include "Swap.h"

using namespace std;

namespace samples
{
	void CallReferenceExample()
	{
		int number1 = 1;
		int number2 = 2;

		SwapMain(number1, number2);
	}

	void SwapMain(int& number1, int& number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}
}