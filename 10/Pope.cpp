#include <iostream>
#include "Pope.h"

using namespace std;

namespace samples
{
	Pope::Pope()
		: Human::Human("Pope")
	{
	}

	void Pope::SayMyName() const
	{
		cout << "I'm " << mName << "!!" << endl;
	}
}
