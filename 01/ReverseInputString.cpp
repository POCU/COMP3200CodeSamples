#include "ReverseInputString.h"
#include <iostream>

using namespace std;

namespace samples
{
	void ReverseInputStringExample()
	{
		const int LINE_SIZE = 512;
		char line[LINE_SIZE];

		cin.getline(line, LINE_SIZE);
		if (cin.fail())
		{
			return;
		}

		for (int i = strlen(line) - 1; i >= 0; --i)
		{
			cout << line[i];
		}
		cout << endl;
	}
}