#pragma once

struct Record
{
	string FirstName;
	string LastName;
	string StudentID;
	string Score;
};

namespace samples
{
	Record InputRecord();
	
	void ManageRecordsExample();

	void WriteFileRecord(std::ofstream& outputStream, const Record& record);
}
