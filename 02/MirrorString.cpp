#include <iostream>
#include <string>
#include "MirrorString.h"

using namespace std;

namespace samples
{
	void MirrorStringExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|    Mirror String Example     |" << endl;
		cout << "+------------------------------+" << endl;

		string line = "Hello World!";

		cout << "string to mirror: " << line << endl;

		for (int i = line.size() - 1; i >= 0; --i)
		{
			line += line[i];
		}
		cout << "mirrored string" << line << endl;
	}
}