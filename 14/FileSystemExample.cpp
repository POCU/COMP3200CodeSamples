#include <filesystem>
#include <iostream>
#include "FileSystemExample.h"

using namespace std;
namespace fs = std::experimental::filesystem::v1;

namespace samples
{
	static const char* FOLDER_NAME = "FileSystemExample";
	static const char* COPIED_FOLDER_NAME = "Copied";
	static const char* FILE_NAME = "test.txt";
	static const char* RENAMED_FILE_NAME = "renamed_text.txt";

	void FileSystemExample()
	{
		const fs::path WORKING_DIRECTORY = fs::current_path() / FOLDER_NAME;
		const fs::path COPIED_FOLDER_DIRECTORY = WORKING_DIRECTORY / COPIED_FOLDER_NAME;
		fs::create_directory(COPIED_FOLDER_DIRECTORY);

		fs::path originalFileLocation = WORKING_DIRECTORY / FILE_NAME;

		cout << originalFileLocation << endl;

		fs::path copiedFileLocation = COPIED_FOLDER_DIRECTORY / FILE_NAME;
		fs::copy(originalFileLocation, copiedFileLocation);

		fs::path renamedFileLocation = WORKING_DIRECTORY / RENAMED_FILE_NAME;
		fs::rename(originalFileLocation, renamedFileLocation);

		for (auto& path : fs::recursive_directory_iterator(WORKING_DIRECTORY))
		{
			std::cout << path << std::endl;
		}

		fs::copy(copiedFileLocation, originalFileLocation);
		fs::remove(renamedFileLocation);
		fs::remove_all(COPIED_FOLDER_DIRECTORY);
	}
}
