#include <iostream>
#include "Swap.h"

using namespace std;

namespace samples
{
	void SwapExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|         Swap Example         |" << endl;
		cout << "+------------------------------+" << endl;
		int number1 = 1;
		int number2 = 2;

		cout << "Before swap: " << number1 << ", " << number2 << endl;
		Swap(number1, number2);
		cout << "After swap: " << number1 << ", " << number2 << endl;
	}

	void Swap(int& number1, int& number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}
}
