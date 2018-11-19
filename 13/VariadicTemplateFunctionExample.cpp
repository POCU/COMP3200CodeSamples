#include "VariadicTemplateFunctionExample.h"
#include "Foo.h"
#include "Bar.h"

namespace samples
{
	void VariadicTemplateFunctionExample()
	{
		Foo* foo1 = Create<Foo>(1.0f);
		Foo* foo2 = Create<Foo>(1.0f, 2.0f);
		
		// Compile error
		// Foo* foo3 = Create<Foo>(1.0f, 2.0f, 3.0f);

		Bar* bar1 = Create<Bar>();
		Bar* bar2 = Create<Bar>(1, 2, 3);

		// Compile error
		// Bar* bar3 = Create<Bar>(1, 2);

		delete foo1;
		delete foo2;

		delete bar1;
		delete bar2;
	}
}