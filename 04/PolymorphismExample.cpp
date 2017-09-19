#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "PolymorphismExample.h"

namespace samples
{
	void PolymorphismExample()
	{
		Cat* cat = new Cat(3);
		Animal* dog = new Dog(5);

		cat->Move();
		cat->Speak();

		dog->Move();
		dog->Speak();

		delete cat;
		delete dog;
	}
}