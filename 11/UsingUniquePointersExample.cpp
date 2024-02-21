#include <memory>
#include <iostream>
#include "UsingUniquePointersExample.h"
#include "MyVector.h"

using namespace std;

namespace samples
{
	void UsingUniquePointersExample()
	{
		unique_ptr<int> num1 = make_unique<int>(10);
		unique_ptr<char> char1 = make_unique<char>('d');

		cout << *num1 << endl;
		cout << *char1 << endl;

		unique_ptr<MyVector> myVector = make_unique<MyVector>(3, 5);

		cout << "X: " << myVector->GetX() << ", Y: " << myVector->GetY() << endl;

		// Compiler error
		// unique_ptr<MyVector> copyOfMyVector1 = myVector;
		// unique_ptr<MyVector> copyOfMyVector2(myVector);

		myVector.reset(new MyVector(1, 5));

		cout << "X: " << myVector->GetX() << ", Y: " << myVector->GetY() << endl;

		num1.reset();
		myVector = nullptr;
		
		unique_ptr<char> char2(move(char1));

		// Run-time error
		//cout << "Char1: " << *char1 << endl;
		cout << "Char2: " << *char2 << endl;

		const unique_ptr<float> float1 = make_unique<float>(2.0f);

		// Compile error
		// unique_ptr<float> float2(move(float1));
		//float1.reset(new float(1.0f));
	}
}
