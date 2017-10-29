#include <iostream>
#include "FixedVector.h"
#include "FixedVectorExample.h"

using namespace std;

namespace samples
{
	void FixedVectorExample()
	{
		FixedVector<int, 3> fixedVector1;
		FixedVector<float, 5> fixedVector2;
		FixedVector<char*, 4> fixedVector3;

		char* str[4] = { "Element 1", "Element 2", "Element 3", "Element 4"};

		fixedVector1.Add(10);

		fixedVector2.Add(15.5f);
		fixedVector2.Add(20.5f);
		fixedVector2.Add(25.5f);

		fixedVector3.Add(str[0]);
		fixedVector3.Add(str[1]);
		fixedVector3.Add(str[2]);
		fixedVector3.Add(str[3]);
		
		cout << "fixedVector1 - <Size, Capacity>: " << "<" << fixedVector1.GetSize() 
			<< ", " << fixedVector1.GetCapacity()  << ">"<< endl;
		cout << "fixedVector2 - <Size, Capacity>: " << "<" << fixedVector2.GetSize()
			<< ", " << fixedVector2.GetCapacity() << ">" << endl;
		cout << "fixedVector3 - <Size, Capacity>: " << "<" << fixedVector3.GetSize()
			<< ", " << fixedVector3.GetCapacity() << ">" << endl;
	}
}