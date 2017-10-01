#include <iostream>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "ObjectPointerCastingExample.h"

using namespace std;

namespace samples
{
	void ObjectPointerCastingExample()
	{
		Animal* pet1 = new Cat(2, "Lulu");
		Animal* pet2 = new Dog(2, "Burnaby");
	
		Cat* cat = static_cast<Cat*>(pet1);
		Dog* dog1 = static_cast<Dog*>(pet2);
		Dog* dog2 = static_cast<Dog*>(pet1);

		cout << "cat's name : " << cat->GetName() << endl;
		cout << "dog1's address :" << dog1->GetAddress() << endl;

		// prints cat's name instead
		cout << "dog2's address : " << dog2->GetAddress() << endl;

		delete pet1;
		delete pet2;
	}
}