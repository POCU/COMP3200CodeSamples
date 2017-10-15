#include <iostream>
#include <map>
#include <string>
#include "MapInsertingExample.h"

using namespace std;

namespace samples
{
	void MapInsertingExample()
	{
		map<string, int> studentsScoreMap;

		studentsScoreMap.insert(pair<string, int>("Lulu", 10));
		studentsScoreMap.insert(pair<string, int>("Poppy", 50));

		for (map<string, int>::iterator iter = studentsScoreMap.begin(); iter != studentsScoreMap.end(); ++iter)
		{
			cout << iter->first << ", " << iter->second << endl;
		}
		cout << endl;

		studentsScoreMap.insert(pair<string, int>("Lulu", 100));

		for (map<string, int>::iterator iter = studentsScoreMap.begin(); iter != studentsScoreMap.end(); ++iter)
		{
			cout << iter->first << ", " << iter->second << endl;
		}
	}
}