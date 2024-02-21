#include <iostream>
#include <map>
#include "MapInsertingWithOperatorExample.h"

using namespace std;

namespace samples
{
	void MapInsertingWithOperatorExample()
	{
		map<string, int> studentScores;
		
		studentScores["Lulu"] = 10;
		studentScores["Poppy"] = 50;

		cout << "Lulu's score is " << studentScores["Lulu"] << endl;
		cout << "Poppy's score is " << studentScores["Poppy"] << endl;
		cout << endl;
	
		studentScores["Lulu"] = 100;
		cout << "Lulu's score is " << studentScores["Lulu"] << endl;
		cout << "Poppy's score is " << studentScores["Poppy"] << endl;
	}
}