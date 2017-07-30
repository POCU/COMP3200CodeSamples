#include "AddIntegers.h"
#include <iostream>

using namespace std;

namespace samples
{
	void AddIntegers()
	{
		int number;
		int sum = 0;

		while (true)
		{
			cin >> number;
			if (cin.eof())
			{
				break;
			}
			else if (cin.fail())
			{
				cin.clear();
				cin.ignore();
				continue;
			}
			sum += number;
		}
		cout << "the sum is " << sum << endl;
	}
}