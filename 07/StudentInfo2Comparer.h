#include "StudentInfo2.h"

#pragma once

namespace samples
{
	class StudentInfo2Comparer
	{
	public:
		bool operator()(const StudentInfo2& object1, const StudentInfo2& object2) const
		{
			if (object1.GetName() == object2.GetName())
			{
				return object1.GetStudentID() < object2.GetStudentID();
			}
			return object1.GetName() < object2.GetName();
		}
	};
}