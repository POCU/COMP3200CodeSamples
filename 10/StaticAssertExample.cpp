#include "StaticAssertExample.h"
#include <iostream>

using namespace std;

namespace samples
{
	void StaticAssertExample()
	{
		const int MAGIC_INT = 5;

		int n = 1;

		// Compile error
		// static_assert(n == MAGIC_INT, "n is not equal to MAGIC_INT");

		const int n2 = 2;

		// Compile error
		//static_assert(n2 == MAGIC_INT, "n2 is not equal to MAGIC_INT");

		const int n3 = 5;

		static_assert(n3 == MAGIC_INT, "n2 is not equal to MAGIC_INT");

		cout << "Magic int is: " << n3 << endl;
	}
}
