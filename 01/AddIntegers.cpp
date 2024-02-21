#include "AddIntegers.h"
#include <iostream>

using namespace std;

namespace samples
{
	void AddIntegersExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|     Add Integers Example     |" << endl;
		cout << "+------------------------------+" << endl;

		int number;
		int sum = 0;

		while (true)
		{
			cout << "Please enter an integer or EOF: ";
			cin >> number;
			if (cin.eof())
			{
				break;
			}

			if (cin.fail())
			{
				cout << "Invalid input" << endl;
				cin.clear();
				cin.ignore(LLONG_MAX, '\n');
				continue;
			}
			sum += number;
		}
		cin.clear();

		cout << "The sum is " << sum << endl;
	}
}