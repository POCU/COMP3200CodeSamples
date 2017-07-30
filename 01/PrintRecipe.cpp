#include <iomanip>
#include <iostream>
#include "PrintRecipe.h"

using namespace std;

namespace samples
{
	void PrintRecipeExample()
	{
		float coffeePrice = 1.25f;
		float sconesPrice = 4.75f;
		float burgerPrice = 12.104f;

		cout << "--------------------------" << endl;
		cout << setw(8) << "Name" << setw(12) << "Price" << endl;
		cout << "--------------------------" << endl;

		cout << setw(10) << "Coffee" << setw(6) << "$" << "0" << coffeePrice << endl;
		cout << setw(10) << "Scones" << setw(6) << "$" << "0" << sconesPrice << endl;
		cout << setw(10) << "Burger" << setw(6) << "$" << setprecision(4) << showpoint
									burgerPrice << endl;
	}
}
