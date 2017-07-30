#include "AddIntegers.h"
#include <iostream>

using namespace std;

namespace samples
{
	void AddIntegersExample()
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

			if (cin.fail())
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