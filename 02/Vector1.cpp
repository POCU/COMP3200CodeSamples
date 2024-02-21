#include <iostream>
#include "Vector1.h"

using namespace std;

Vector1::Vector1()
	: mX(0)
	, mY(0)
{
	cout << "Vector1(): (" << mX << ", " << mY << ")" << endl;
}

Vector1::Vector1(int x, int y)
	: mX(x)
	, mY(y)
{
	cout << "Vector1(int x, int y): (" << mX << ", " << mY << ")" << endl;
}