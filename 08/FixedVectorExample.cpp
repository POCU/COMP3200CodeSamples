#include <iostream>
#include "FixedVector.h"
#include "FixedVectorExample.h"
#include "IntVector.h"

using namespace std;

namespace samples
{
	void FixedVectorExample()
	{
		FixedVector<int, 3> scores;
		scores.Add(10);
		scores.Add(50);
		
		cout << "scores - <Size, Capacity>: " << "<" << scores.GetSize()
			<< ", " << scores.GetCapacity() << ">" << endl;

		FixedVector<IntVector, 5> intVectors;
		intVectors.Add(IntVector(2, 5));
		intVectors.Add(IntVector(4, 30));
		intVectors.Add(IntVector(22, 3));

		cout << "intVectors - <Size, Capacity>: " << "<" << intVectors.GetSize()
			<< ", " << intVectors.GetCapacity() << ">" << endl;


		FixedVector<IntVector*, 4> intVectors2;

		IntVector* intVector = new IntVector(3, 2);
		intVectors2.Add(intVector);
		
		cout << "intVectors2 - <Size, Capacity>: " << "<" << intVectors2.GetSize()
			<< ", " << intVectors2.GetCapacity() << ">" << endl;

		delete intVector;
	}
}