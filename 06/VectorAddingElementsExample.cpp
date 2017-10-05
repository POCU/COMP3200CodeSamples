#include <iostream>
#include <vector>
#include "VectorAddingElementsExample.h"

using namespace std;

namespace samples
{
	void VectorAddingElementsExample()
	{
		vector<int> scores;
		scores.reserve(5);

		scores.push_back(30);
		scores.push_back(50);
		scores.push_back(80);
		scores.push_back(65);
		scores.push_back(73);

		PrintScores(scores);

		scores.pop_back();
		scores.pop_back();

		PrintScores(scores);

		scores.resize(10);

		PrintScores(scores);
	}

	void PrintScores(const vector<int>& scores)
	{
		cout << "Current elements : ";
		for (vector<int>::const_iterator iter = scores.begin(); iter != scores.end(); ++iter)
		{
			cout << *iter << " ";
		}
		cout << endl;

		cout << "Current capacity : " << scores.capacity() << endl;
		cout << "Current size : " << scores.size() << endl << endl;
	}
}
