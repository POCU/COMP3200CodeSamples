#include <iostream>
#include "Math.h"
#include "MathExample.h"

using namespace std;

namespace samples
{
	void MathExample()
	{
		int value1 = 15;
		int value2 = 3;

		cout << Math::Add(value1, value2) << endl;
		cout << Math::Divide(value1, value2) << endl;
		cout << Math::Multiply(value1, value2) << endl;
		cout << Math::Max(value1, value2) << endl;
		cout << Math::Min(value1, value2) << endl;
	}
}