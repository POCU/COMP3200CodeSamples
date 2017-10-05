#include <iostream>
#include <string>
#include "Score.h"

using namespace std;

namespace samples
{
	Score::Score(int score, const string& className)
		: mScore(score)
		, mClassName(className)
	{
	}

	int Score::GetScore() const
	{
		return mScore;
	}

	void Score::SetScore(const int score)
	{
		mScore = score;
	}

	const string& Score::GetClassName() const
	{
		return mClassName;
	}

	void Score::PrintVariables() const
	{
		cout << mClassName << ": " << mScore << endl;
	}
}