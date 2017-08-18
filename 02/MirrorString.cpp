#include <iostream>
#include <string>
#include "MirrorString.h"

using namespace std;

namespace samples
{
	void MirrorStringExample()
	{
		string line = "Hello World!";

		for (int i = line.length() - 1; i >= 0; --i)
		{
			line += line[i];
		}
		cout << line << endl;
	}
}