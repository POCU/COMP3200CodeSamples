#include <iostream>

#pragma once

using namespace std;

namespace samples
{
	class StudentInfo2
	{
	public:
		StudentInfo2(const string& name, const string& studentID);

		const string& GetName() const;
		const string& GetStudentID() const;

	private:
		string mName;
		string mStudentID;
	};
}