#include <iostream>

#pragma once
namespace samples
{
	class Score
	{
	public:
		Score();
		Score(int score, const std::string& studentName);
		void Print() const;

	private:
		int mScore;
		std::string mStudentName;
	};
}