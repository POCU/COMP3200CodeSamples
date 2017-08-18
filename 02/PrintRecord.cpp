#include <iostream>
#include <sstream>
#include <string>
#include "PrintRecord.h"

using namespace std;

namespace samples
{
	void PrintRecordExample()
	{
		string firstName;
		string lastName;
		string studentID;
		string score;

		istringstream inputStream("Pope Kim A12345678 80");
		ostringstream outputStream;

		inputStream >> firstName >> lastName >> studentID >> score;
		outputStream << firstName << " " << lastName << " " << studentID << " " << score;
		cout << outputStream.str() << endl;
	}
}
