// Example4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;


void showState(fstream&);

int main()
{
	fstream testFile("stiff.dat", ios::out);

	if (testFile.fail())
	{
		cout << "Cannot open the file. \n";
		return 1;
	}

	int num = 10;
	cout << "Writing to the file.\n";
	testFile << num;
	showState(testFile);
	testFile.close();

	return 0;
}

void showState(fstream& file) {
	cout << "File Status:\n";
	cout << "eof bit: " << file.eof() << endl;
	cout << "fail bit: " << file.fail() << endl;
	cout << "bad bit: " << file.bad() << endl;
	cout << "good bit: " << file.good() << endl;
	file.clear();

}
