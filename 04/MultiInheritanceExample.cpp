#include "Liger.h"
#include "MultiInheritanceExample.h"

#include <iostream>

using namespace std;

namespace samples
{
	void MultiInheritanceExample()
	{
		Liger liger(5);

		liger.ShowOffBeautifulHair();
		liger.PretendToBeZebra();

		cout << "tiger age: " << liger.Tiger::GetAge() << endl;
		cout << "lion age: " << liger.Lion::GetAge() << endl;
	}
}