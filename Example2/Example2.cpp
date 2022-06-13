// Example2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile;
	string name;

	inputFile.open("Friends.txt");

	if (inputFile)
	{
		cout << "Names stored in the Friends.txt file.\n";

		while (inputFile >> name) {
			cout << name << endl;
		}
	}
	else {
		cout << "Could not open file";
	}


	inputFile.close();

	return 0;
}
