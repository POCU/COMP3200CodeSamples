#include "EColor.h"
#include "Ball.h"

using namespace std;

namespace samples
{
	void EnumExample()
	{
		Ball ball1(Red);
		Ball ball2(Blue);
		Ball ball3(Green);

		ball1.SayColor();
		ball2.SayColor();
		ball3.SayColor();
	}
}

