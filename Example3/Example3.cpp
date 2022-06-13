// Example3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream inOutFile;
	string word;

	inOutFile.open("inout.txt");

	if (!inOutFile) {
		cout << "The file was not found." << endl;
		return 1;
	}


	while (inOutFile >> word)
	{
		cout << word << endl;
	}

	inOutFile.clear();

	inOutFile << "Juan" << endl;

	inOutFile.close();

	return 0;
}
