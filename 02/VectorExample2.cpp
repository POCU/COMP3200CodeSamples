#include <iostream>
#include "Vector2.h"
#include "VectorExample2.h"

using namespace std;

namespace samples
{
	void VectorExample2()
	{
		Vector2 vector1;
		Vector2 vector2(13, 4);

		cout << "v1" << endl << "mX : " << vector1.GetX() << "mY : " << vector1.GetY() << endl;
		cout << "v2" << endl << "mX : " << vector2.GetX() << "mY : " << vector2.GetY() << endl;

		vector1.SetX(10);
		vector1.SetY(20);

		vector2.SetX(30);
		vector2.SetY(40);

		vector1.Add(vector2);

		cout << "v1" << endl << "mX : " << vector1.GetX() << "mY : " << vector1.GetY() << endl;
		cout << "v2" << endl << "mX : " << vector2.GetX() << "mY : " << vector2.GetY() << endl;
	}
}