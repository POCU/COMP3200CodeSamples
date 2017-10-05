#include "ObjectVectorExample.h"
#include "PointerVectorExample.h"
#include "VectorAddingElementsExample.h"
#include "VectorCalculatingSumExample.h"
#include "VectorSwappingElementsExample.h"

using namespace samples;

int main()
{
	// 1. Adding elements
	VectorAddingElementsExample();

	// 2. Swapping elements
	VectorSwappingElementsExample();

	// 3. Calculating sum
	VectorCalculatingSumExample();

	// 4. Object vector
	ObjectVectorExample();

	//5. Pointer vector
	PointerVectorExample();

	return 0;
}