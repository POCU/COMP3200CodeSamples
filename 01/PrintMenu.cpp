#include <iomanip>
#include <iostream>
#include "PrintMenu.h"

using namespace std;

namespace samples
{
	void PrintMenuExample()
	{
		const float coffeePrice = 1.25f;
		const float lattePrice = 4.75f;
		const float breakfastComboPrice = 12.104f;

		const size_t nameColumnLength = 20;
		const size_t priceColumnLength = 10;

		cout << left << fixed << showpoint << setprecision(2);

		cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << "" << endl << setfill(' ');
		cout << setw(nameColumnLength) << "Name" 
			<< setw(priceColumnLength) << "Price" << endl;
		cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << "" << endl << setfill(' ');

		cout << setw(nameColumnLength) << "Coffee" 
			<< "$" << coffeePrice << endl;
		cout <<  setw(nameColumnLength) << "Latte"
			<< "$" << lattePrice << endl;
		cout << setw(nameColumnLength) << "Breakfast Combo" 
			<< "$" << breakfastComboPrice << endl;
	}
}
