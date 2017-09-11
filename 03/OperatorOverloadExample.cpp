#include <iostream>
#include "OperatorOverloadExample.h"
#include "Vector2.h"

using namespace std;

namespace samples
{
	void OperatorOverloadExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "| Operator Overloading Example |" << endl;
		cout << "+------------------------------+" << endl;
	
		Vector2 vector1(3, 5);
		Vector2 vector2(7, 9);

		const int multiplier = 3;

		cout << "vector1:" << vector1 << endl;
		cout << "vector2:" << vector2 << endl;

		Vector2 result = vector1 * vector2;
		cout << "vector1 * vector2: " << result << endl;

		result = vector1 * multiplier;
		cout << "vector1 * multiplier: " << result << endl;
		cout << "vector1: " << vector1 << endl;

		result = multiplier * vector1;
		cout << "multiplier * vector1: " << result << endl;
		cout << "vector1: " << vector1 << endl;

		vector1 *= vector2;
		cout << "vector1 *= vector2" << endl;
		cout << "vector1: " << vector1 << endl;

		vector1 *= multiplier;
		cout << "vector1 *= multiplier" << endl;
		cout << "vector1: " << vector1 << endl;
	}
}