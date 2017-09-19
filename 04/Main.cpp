#include "PolymorphismExample.h"
#include "MultiInheritanceExample.h"
#include "InterfaceExample.h"

using namespace samples;

int main()
{
	// 1. Polymorphism 
	PolymorphismExample();

	// 2. Multiple Inheritance... YUCK
	MultiInheritanceExample();

	// 3. Interface
	InterfaceExample();

	return 0;
}