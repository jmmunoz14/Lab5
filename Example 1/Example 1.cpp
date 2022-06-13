// fig19_01.cpp
// Printing the address stored in a char* variable.
#include <iostream>

//Objective: Output to a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {


	ofstream outputFile;
	string name;


	outputFile.open("Friends.txt");


	cout << "Enter the name of 3 friends.\n";

	for (int i = 1; i <= 3; i++) {
		cout << "Friend #" << i << ": ";
		cin >> name;
		outputFile << name << endl;
	}

	outputFile.close();

	cout << "The names were saved to a file.";

	return 0;
}