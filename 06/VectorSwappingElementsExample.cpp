#include <iostream>
#include <vector>
#include "VectorSwappingElementsExample.h"
#include "VectorAddingElementsExample.h"

using namespace std;

namespace samples
{
	void VectorSwappingElementsExample()
	{
		vector<int> scores;
		scores.reserve(2);

		scores.push_back(85);
		scores.push_back(73);

		cout << "scores" << endl;
		PrintScores(scores);

		vector<int> anotherScores;
		anotherScores.assign(7, 100);

		scores.swap(anotherScores);

		cout << "scores" << endl;
		PrintScores(scores);

		cout << "anotherScores" << endl;
		PrintScores(anotherScores);
	}
}