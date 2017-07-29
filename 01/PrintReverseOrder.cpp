#include <iostream>
#include "PrintReverseOrder.h"
using namespace std;

namespace samples
{
	void PrintReverseOrder()
	{
		char line[512];
		int index = 0;

		cin.getline(line, 512);
		while (line[index] != cin.eof())
		{
			index++;
		}
		
		for (index -= 1; index >= 0; index--)
		{
			cout << line[index] << " ";
		}
	}
}