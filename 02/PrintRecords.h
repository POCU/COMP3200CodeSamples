#pragma once

#include <iostream>
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
	Record ReadRecord(std::istream& stream, bool bPrompt);

	void WriteFileRecord(std::fstream& outputStream, const Record& record);

	void DisplayRecords(std::fstream& fileStream);

	void ManageRecordsExample();
}
