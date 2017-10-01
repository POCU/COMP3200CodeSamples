#include <iostream>
#include "Math.h"
#include "StaticMemberFunctionExample.h"

using namespace std;

namespace samples
{
	void StaticMemberFunctionExample()
	{
		float number = 5.5f;

		cout << Math::Ceil(number) << endl;
		cout << Math::Floor(number) << endl;
		cout << Math::Power(number, 3) << endl;
		cout << Math::Round(number) << endl;
		cout << Math::Square(number) << endl;
	}
}