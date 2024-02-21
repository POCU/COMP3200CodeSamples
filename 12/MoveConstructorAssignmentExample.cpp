#include <iostream>
#include <cassert>
#include "MoveConstructorAssignmentExample.h"

using namespace std;

namespace samples
{
	void MoveConstructorAssignmentExample()
	{
		MyString originalString("String1");

		MyString copyConstructorString(originalString);

		cout << originalString << endl;
		cout << copyConstructorString << endl;

		MyString moveConstructorString(MakeMyString());

		cout << moveConstructorString << endl;

		moveConstructorString = move(originalString);

		assert(originalString.GetString() == nullptr);
		assert(originalString.GetSize() == 0);

		cout << moveConstructorString << endl;
	}

	MyString MakeMyString()
	{
		MyString tempString("Hello");

		return tempString;
	}
}