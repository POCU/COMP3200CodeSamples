#include <iostream>
#include "Vector2.h"
#include "VectorExample2.h"

using namespace std;

namespace samples
{
	void VectorExample2()
	{
		cout << "+------------------------------+" << endl;
		cout << "|       Vector Example 2       |" << endl;
		cout << "+------------------------------+" << endl;

		Vector2 v1;
		Vector2 v2(13, 4);

		cout << "v1: (" << v1.GetX() << ", " << v1.GetY() << ")" << endl;
		cout << "v2: (" << v2.GetX() << ", " << v2.GetY() << ")" << endl;

		v1.SetX(10);
		v1.SetY(20);

		v2.SetX(30);
		v2.SetY(40);

		cout << "v1: (" << v1.GetX() << ", " << v1.GetY() << ")" << endl;
		cout << "v2: (" << v2.GetX() << ", " << v2.GetY() << ")" << endl;

		v1.Add(v2);

		cout << "v1: (" << v1.GetX() << ", " << v1.GetY() << ")" << endl;
	}
}