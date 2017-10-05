#include <iostream>
#include <vector>
#include "ObjectVectorExample.h"
#include "Score.h"

using namespace std;

namespace samples
{
	void ObjectVectorExample()
	{
		vector<Score> scores;
		scores.reserve(5);

		scores.push_back(Score(30, "C++"));
		scores.push_back(Score(59, "Algorithm"));
		scores.push_back(Score(87, "Java"));
		scores.push_back(Score(74, "Data Comm"));
		scores.push_back(Score(41, "Android"));

		cout << "Before erasing the element" << endl;
		PrintVector(scores);

		cout << "After erasing the element" << endl;

		vector<Score>::iterator iter = scores.begin();
		while (iter != scores.end())
		{
			if (iter->GetClassName() == "Java")
			{
				iter = scores.erase(iter);
			}
			else
			{
				iter++;
			}
		}
		PrintVector(scores);

		cout << "After changing the score of class 1" << endl;
		for (vector<Score>::iterator iter = scores.begin(); iter != scores.end(); ++iter)
		{
			Score score = *iter;

			if (score.GetScore() == 30)
			{
				score.SetScore(100);
			}
		}

		PrintVector(scores);
	}
	
	void PrintVector(const vector<Score>& scores)
	{
		for (vector<Score>::const_iterator iter = scores.begin(); iter != scores.end(); ++iter)
		{
			iter->PrintVariables();
		}
		cout << endl;
	}
}