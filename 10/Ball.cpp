#include <iostream>
#include "Ball.h"

using namespace std;

namespace samples
{
	Ball::Ball(eColor color)
		: mColor(color)
	{
	}
	
	eColor Ball::GetColor() const
	{
		return mColor;
	}

	void Ball::SayColor() const
	{
		switch (mColor)
		{
		case eColor::Red:
			cout << "I'm RED!!" << endl;
			break;

		case eColor::Green:
			cout << "I'm GREEN!!" << endl;
			break;

		case eColor::Blue:
			cout << "I'm BLUE!!" << endl;
			break;

		default:
			cout << "I DON'T KNOW WHAT COLOR I AM!!" << endl;
			break;
		}
	}
}
