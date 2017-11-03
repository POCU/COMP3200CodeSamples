#include <iostream>
#include <string>
#include "Score.h"

namespace samples
{
	Score::Score()
		: mScore(0)
	{
	}

	Score::Score(int score, const std::string& studentName)
		: mScore(score)
		, mStudentName(studentName)
	{
	}

	void Score::Print() const
	{
		std::cout << "<" << mStudentName << ", " << mScore << ">" << std::endl;
	}
}