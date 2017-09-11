#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "InheritanceExample.h"

using namespace std;

namespace samples
{
	void InheritanceExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|      Inheritance Example     |" << endl;
		cout << "+------------------------------+" << endl;

		Cat cat(3);
		Dog dog(5);

		cout << "Cat's Age: " << cat.GetAge() << endl;
		cout << "Cat's Purring: " << cat.Purr() << endl;

		cout << "Dog's Age: " << dog.GetAge() << endl;
		cout << "Dog's Barking: " << dog.Bark() << endl;
	}
}