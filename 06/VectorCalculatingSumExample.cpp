#include <iostream>
#include <vector>
#include "VectorCalculatingSumExample.h"

using namespace std;

namespace samples
{
	int CalculateSum(const vector<int>& scores)
	{
		int sum = 0;

		for (size_t i = 0; i < scores.size(); i++)
		{
			sum += scores[i];
		}

		return sum;
	}

	void VectorCalculatingSumExample()
	{
		vector<int> myScores;
		myScores.reserve(5);

		vector<int> yourScores;
		yourScores.reserve(5);

		myScores.push_back(13);
		myScores.push_back(21);
		myScores.push_back(35);
		myScores.push_back(76);
		myScores.push_back(94);

		yourScores.push_back(61);
		yourScores.push_back(27);
		yourScores.push_back(83);
		yourScores.push_back(91);
		yourScores.push_back(100);

		yourScores.clear();

		cout << "myScores" << endl;
		cout << "Sum : " << CalculateSum(myScores) << endl << endl;

		cout << "yourScores" << endl;
		cout << "Sum : " << CalculateSum(yourScores) << endl << endl;
	}
}