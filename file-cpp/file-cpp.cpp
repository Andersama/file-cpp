// file-cpp.cpp : Defines the entry point for the application.
//

#include "file.h"
#include <filesystem>
#include <iostream>

using namespace std;

int main()
{
	const wchar_t* prefix = L"x:";
	cout << std::filesystem::_Has_drive_letter_prefix(prefix, prefix + 2);
	cout << util::wide::has_drive_letter_prefix(prefix, prefix + 2);
	cout << "Hello CMake." << endl;
	return 0;
}
