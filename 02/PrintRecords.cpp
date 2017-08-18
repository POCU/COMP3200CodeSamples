#include <fstream>
#include <iomanip>
#include "PrintRecords.h"

using namespace std;

namespace samples
{
	Record ReadRecord(istream& stream, bool bPrompt)
	{
		Record record;

		if (bPrompt)
		{
			cout << "First name: ";
		}
		stream >> record.FirstName;

		if (bPrompt)
		{
			cout << "Last name: ";
		}
		stream >> record.LastName;

		if (bPrompt)
		{
			cout << "Student ID: ";
		}
		stream >> record.StudentID;

		if (bPrompt)
		{
			cout << "Score:  ";
		}
		stream >> record.Score;

		return record;
	}

	void DisplayRecords(fstream& fileStream)
	{
		fileStream.seekg(0);

		string line;
		while (true)
		{
			getline(fileStream, line);

			if (fileStream.eof())
			{
				fileStream.clear();
				break;
			}
			cout << line << endl;
		}
	}

	void ManageRecordsExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|    Manage Records Example    |" << endl;
		cout << "+------------------------------+" << endl;

		Record record;

		fstream fileStream;
		fileStream.open("studentRecords.dat", ios_base::in | ios_base::out);

		bool bExit = false;
		while (!bExit)
		{
			char input;

			cout << "a: add" << endl
				<< "d: display" << endl
				<< "x: exit" << endl;
			cin >> input;

			cin.ignore(LLONG_MAX, '\n');
			if (cin.fail())
			{
				cout << "invalid input. " << endl;
				continue;
			}

			switch (input)
			{
			case 'a':
				record = ReadRecord(cin, true);
				WriteFileRecord(fileStream, record);
				break;
			case 'd':
				DisplayRecords(fileStream);
				break;
			case 'x':
				bExit = true;
				break;
			default:
				cout << "invalid input";
				break;
			}
		}

		fileStream.close();
	}

	void WriteFileRecord(fstream& outputStream, const Record& record)
	{
		outputStream.seekp(0, ios_base::end);

		outputStream << record.FirstName << " "
			<< record.LastName << " "
			<< record.StudentID << " "
			<< record.Score << endl;

		outputStream.flush();
	}
}