//============================================================================
// Name        : Input.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string> //added by me in order to use "getline"
using namespace std;

int main() {

	cout << "Enter your name: " << flush;
	string input;

	//cin >> input;  //The old way
	getline(cin, input);    // The new and better way (It captures the whole line).

	cout << "You entered: " << input << endl;

	cout << "Enter a number: " << flush;
	int value;
	cin >> value;
	cout << "You entered: " << value << endl;

	return 0;
}
