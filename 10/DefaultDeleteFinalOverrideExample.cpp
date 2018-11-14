#include "DefaultDeleteFinalOverrideExample.h"
#include "Human.h"
#include "Pope.h"
#include "PopeClone.h"

namespace samples
{
	void DefaultDeleteFinalOverrideExample()
	{
		Human* human = new Human("Johny");
		human->SayMyName();

		Human* human2 = new Pope();
		human2->SayMyName();

		Pope pope;
		// Compile Error
		// Pope popeClone(pope);

		delete human2;
		delete human;
	}
}