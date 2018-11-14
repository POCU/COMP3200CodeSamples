#include "AutoKeywordExample.h"
#include "MyVector.h"
#include <vector>
#include <iostream>

using namespace std;

namespace samples
{
	void AutoKeywordExample()
	{
		int* numPtr = new int(5);

		auto autoNumPtr = numPtr; // Bad Practice!!

		cout << "autoNumPtr: " << *autoNumPtr << endl;

		auto* autoNumPtr2 = numPtr;

		cout << "autoNumPtr2: " << *autoNumPtr2 << endl;

		autoNumPtr = nullptr;
		autoNumPtr2 = nullptr;
		delete numPtr;

		char character = 'a';
		char& characterRef = character;
		auto characterAutoRef = characterRef;

		character = 'b';

		cout << "anotherCharacterRef: " << characterAutoRef << endl;

		char anotherCharacter = 'c';
		char& anotherCharacterRef = anotherCharacter;
		auto& anotherCharacterAutoRef = anotherCharacterRef;

		anotherCharacter = 'd';

		cout << "anotherCharacterAutoRef: " << anotherCharacterAutoRef << endl;

		const float someFloat = 1.0f;
		auto& someFloatRef = someFloat;

		// Compile Error
		// someFloatRef = 2.0f;

		const auto& betterSomeFloatRef = someFloat;

		cout << "betterSomeFloatRef: " << betterSomeFloatRef << endl;

		vector<int> intVector;
		intVector.reserve(3);

		intVector.push_back(1);
		intVector.push_back(2);
		intVector.push_back(3);

		for (auto it = intVector.begin(); it != intVector.end(); ++it)
		{
			cout << "Number in intVector: " << *it << endl;
		}

		auto* myVector = new MyVector<int>(10, 20);

		cout << "mX: " << myVector->GetX() << ", mY: " << myVector->GetY() << endl;
	}
}