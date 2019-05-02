#include "ObjectAddressSavingExample.h"
#include "ObjectPointerCastingExample.h"
#include "StaticMemberFunctionExample.h"
#include "StaticMemberVariableExample.h"
#include "ValueCastingExample.h"

using namespace samples;

int main(){
	// 1. Static_Cast with values
	ValueCastingExample();

	// 2. Static_Cast with pointers
	ObjectPointerCastingExample();

	// 3. Saving Address of an Cat class
	ObjectAddressSavingExample();

	// 4. Static member variable
	StaticMemberVariableExample();

	// 5. Static member function
	StaticMemberFunctionExample();

	return 0;
}