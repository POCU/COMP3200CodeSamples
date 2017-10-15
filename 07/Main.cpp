#include "MapInsertingExample.h"
#include "MapInsertingWithOperatorExample.h"
#include "MapUserDefinedTypesExample1.h"
#include "MapUserDefinedTypesExample2.h"

using namespace samples;

int main()
{
	// 1. Inserting
	MapInsertingExample();

	// 2. Inserting with operator
	MapInsertingWithOperatorExample();

	// 3. User-defined types as key 1
	MapUserDefinedTypesExample1();

	// 4. User-defined types as key 2
	MapUserDefinedTypesExample2();

	return 0;
}