#include <iostream>
#include "IntVector.h"
#include "MyArray.h"
#include "MyArrayExample.h"

using namespace std;

namespace samples
{
	void MyArrayExample()
	{
		MyArray<int> scores;
		scores.Add(10);
		scores.Add(50);
		
		cout << "scores - Size: " << scores.GetSize() << endl;
		
		MyArray<IntVector> intVectors;
		intVectors.Add(IntVector(1, 1));
		intVectors.Add(IntVector(5, 3));

		cout << "intVectors - Size: " << intVectors.GetSize() << endl;

		MyArray<IntVector*> intVectors2;

		IntVector* intVector = new IntVector(3, 2);
		intVectors2.Add(intVector);
		
		cout << "intVectors2  - Size: " << intVectors2.GetSize() << endl;

		delete intVector;
	}
}