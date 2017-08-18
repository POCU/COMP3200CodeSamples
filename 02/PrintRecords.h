#pragma once

#include <string>

struct Record
{
	std::string FirstName;
	std::string LastName;
	std::string StudentID;
	std::string Score;
};

namespace samples
{
	Record InputRecord();
	
	void ManageRecordsExample();

	void WriteFileRecord(std::ofstream& outputStream, const Record& record);
}
