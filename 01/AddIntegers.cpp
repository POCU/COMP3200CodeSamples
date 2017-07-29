#include <iostream>
#include "AddIntegers.h"
using namespace std;

namespace samples
{
	void AddIntegers()
	{
		int number;
		int result = 0;

		while (cin >> number)
		{
			if (cin.fail())
			{
				break;
			}
			result += number;
		}
		cout << result << endl;
	}
}