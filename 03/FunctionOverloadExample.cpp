#include <iostream>
#include "OperatorOverloadExample.h"
#include "Vector.h"

using namespace std;

namespace samples
{
	void FunctionOverloadExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "| Function Overloading Example |" << endl;
		cout << "+------------------------------+" << endl;
		
		Vector vector1(3, 5);
		Vector vector2(7, 9);
		const int multiplier = 3;

		cout << "vector1:" << vector1.GetX() << ", " << vector1.GetY() << endl;
		cout << "vector2:" << vector2.GetX() << ", " << vector2.GetY() << endl;

		Vector result = vector1.Multiply(vector2);
		cout << "vector1.Multiply(vector2): " << result.GetX() << ", " << result.GetY() << endl;

		result = vector1.Multiply(multiplier);
		cout << "vector1.Multiply(multiplier): " << result.GetX() << ", " << result.GetY() << endl;
		cout << "vector1: " << vector1.GetX() << ", " << vector1.GetY() << endl;
		
		vector1.Scale(vector2);
		cout << "vector1.Scale(vector2);" << endl;
		cout << "vector1: " << vector1.GetX() << ", " << vector1.GetY() << endl;

		vector1.Scale(multiplier);
		cout << "vector1.Scale(multiplier)" << endl;
		cout << "vector1: " << vector1.GetX() << ", " << vector1.GetY() << endl;
	}
}