#include <iostream>
#include "MyArray.h"
#include "MyArrayExample.h"

using namespace std;

namespace samples
{
	void MyArrayExample()
	{
		MyArray<int> myArray1;
		MyArray<float> myArray2;
		MyArray<char*> myArray3;

		char* str[3] = { "Element 1", "Element 2", "Element 3" };

		myArray1.Add(10);

		myArray2.Add(15.5f);
		myArray2.Add(20.5f);

		myArray3.Add(str[0]);
		myArray3.Add(str[1]);
		myArray3.Add(str[2]);

		cout << "MyArray1 - Size: " << myArray1.GetSize() << endl;
		cout << "MyArray2 - Size: " << myArray2.GetSize() << endl;
		cout << "MyArray3 - Size: " << myArray3.GetSize() << endl;
	}
}