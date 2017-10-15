#include <iostream>
#include <map>
#include <string>
#include "MapUserDefinedTypesExample2.h"
#include "StudentInfo2.h"
#include "StudentInfo2Comparer.h"

namespace samples
{
	void MapUserDefinedTypesExample2()
	{
		map<StudentInfo2, int, StudentInfo2Comparer> studentScores;

		studentScores.insert(pair<StudentInfo2, int>(StudentInfo2("Lulu", "A01234567"), 10));
		studentScores.insert(pair<StudentInfo2, int>(StudentInfo2("Poppy", "A12345678"), 70));
		studentScores.insert(pair<StudentInfo2, int>(StudentInfo2("Lulu", "A01234567"), 50));

		for (map<StudentInfo2, int>::iterator iter = studentScores.begin(); iter != studentScores.end(); ++iter)
		{
			cout << iter->first.GetName() << "[" << iter->first.GetStudentID() << "]:  " << iter->second << endl;
		}
	}
}