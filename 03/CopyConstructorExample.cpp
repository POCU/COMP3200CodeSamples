#include <iostream>
#include "CopyConstructorExample.h"
#include "String.h"

using namespace std;

namespace samples
{
	void CopyConstructorExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|   Copy Constructor example   |" << endl;
		cout << "+------------------------------+" << endl;

		String myName("	John Doe");
		String myNameCopy(myName);
	
		myName.Print();
		myNameCopy.Print();
	}
}
