#include <algorithm>
#include <iostream>
#include <vector>
#include "CopyingVectorExample.h"
#include "Score.h"

using namespace std;

namespace samples
{
	void CopyingVectorExample()
	{
		vector<Score> scores;

		scores.push_back(Score(50, "Lulu"));
		scores.push_back(Score(32, "Blitz"));
		scores.push_back(Score(90, "Heimerdinger"));

		vector<Score> copiedScores;
		copiedScores.resize(scores.size());
		std::copy(scores.begin(), scores.end(), copiedScores.begin());

		for (vector<Score>::iterator it = copiedScores.begin(); it != copiedScores.end(); it++)
		{
			it->Print();
		}
	}
}