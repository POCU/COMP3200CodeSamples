#include "CopyConstructorExample.h"
#include "FunctionOverloadExample.h"
#include "InheritanceExample.h"
#include "OperatorOverloadExample.h"

using namespace samples;

int main()
{
	// 1. Copy Constructor with char Array
	CopyConstructorExample();

	// 2. Multiplying with a Vector or Scalar in Vector Class
	FunctionOverloadExample();

	// 3. Multiplying with a Vector or Scalar in Vector Class
	OperatorOverloadExample();

	// 4. Animal, Cat, Dog Classes
	InheritanceExample();

	return 0;
}