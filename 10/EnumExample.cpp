#include "EColor.h"
#include "Ball.h"

using namespace std;

namespace samples
{
	void EnumExample()
	{
		Ball ball1(eColor::Red);
		Ball ball2(eColor::Blue);
		Ball ball3(eColor::Green);

		ball1.SayColor();
		ball2.SayColor();
		ball3.SayColor();
	}
}

