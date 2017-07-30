#include <iomanip>
#include <iostream>
#include "PrintRecipe.h"

using namespace std;

namespace samples
{
	void PrintRecipeExample()
	{
		float icedcoffeePrice = 1.25f;
		float lattePrice = 4.75f;
		float breakfastPrice = 15.104f;

		cout << "--------------------------" << endl;
		cout << setw(6) << "Name" << setw(17) << "Price" << endl;
		cout << "--------------------------" << endl;

		cout << setw(13) << "Iced coffee" << setw(6) << "$" << "0" << icedcoffeePrice << endl;
		cout << setw(7) << "Latte" << setw(12) << "$" << "0" << lattePrice << endl;
		cout << setw(11) << "Breakfast" << setw(8) << "$" << setprecision(4) << showpoint << breakfastPrice << endl;
	}
}
