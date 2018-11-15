#include "StaticAssertExample.h"
#include "IntVector3D.h"
#include "IntVector4D.h"

using namespace std;

namespace samples
{
	void StaticAssertExample()
	{
		IntVector3D vector1;
		vector1.X = 9;
		vector1.Y = 10;
		vector1.Z = 3;

		// Compile error
		// static_assert(sizeof(vector1) == 16, "Vector4D is not 16 bytes!");

		IntVector4D vector2;
		vector2.X = 2;
		vector2.Y = 3;
		vector2.Z = 1;
		vector2.T = 0;

		static_assert(sizeof(vector2) == 16, "Vector4D is not 16 bytes!");
	}
}
