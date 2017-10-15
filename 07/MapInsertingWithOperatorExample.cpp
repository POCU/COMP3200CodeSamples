#include <iostream>
#include <map>
#include "MapInsertingWithOperatorExample.h"

using namespace std;

namespace samples
{
	void MapInsertingWithOperatorExample()
	{
		map<string, int> studentsScoreMap;
		
		studentsScoreMap["Lulu"] = 10;
		studentsScoreMap["Poppy"] = 50;

		cout << "Lulu's score is " << studentsScoreMap["Lulu"] << endl;
		cout << "Poppy's score is " << studentsScoreMap["Poppy"] << endl;
		cout << endl;
	
		studentsScoreMap["Lulu"] = 100;
		cout << "Lulu's score is " << studentsScoreMap["Lulu"] << endl;
		cout << "Poppy's score is " << studentsScoreMap["Poppy"] << endl;
	}
}