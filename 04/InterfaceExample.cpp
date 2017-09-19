#include "Bat.h"
#include "Cat1.h"
#include "InterfaceExample.h"

namespace samples
{
	void InterfaceExample()
	{
		Bat bat;
		Cat1 cat;

		bat.Fly();
		bat.Walk();

		cat.Walk();
	}
}