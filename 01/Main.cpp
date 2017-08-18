#include "AddIntegers.h"
#include "HelloPope.h"
#include "HiPope.h"
#include "PrintEverything.h"
#include "PrintMenu.h"
#include "ReverseInputString.h"
#include "Swap.h"

using namespace samples;

int main()
{
	// 1. Namespace Example
	hello::SayHelloExample();
	hi::SayHelloExample();

	// 2. Print Everything
	PrintEverythingExample();
	
	// 3. Manipulators
	PrintMenuExample();

	// 4. Summing Integers
	AddIntegersExample();

	// 5. Discarding & Interactive Input
	ReverseInputStringExample();

	// 6. Reference
	SwapExample();

	return 0;
}