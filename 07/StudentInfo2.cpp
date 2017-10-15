#include <iostream>
#include "StudentInfo2.h"

using namespace std;

namespace samples
{
	StudentInfo2::StudentInfo2(const string& name, const string& studentID)
		: mName(name)
		, mStudentID(studentID)
	{
	}

	const string& StudentInfo2::GetName() const
	{
		return mName;
	}

	const string& StudentInfo2::GetStudentID() const
	{
		return mStudentID;
	}
}