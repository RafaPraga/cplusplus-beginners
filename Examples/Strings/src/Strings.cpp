//============================================================================
// Name        : Strings.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

	string text1 = "Hello ";
	string text2 = "Fred";

	string text3Str = text1 + text2;

	char text4Str[10] = {"ab"};
	char text5Str[] = { "xy" };

	std::cout << text1 << text2 << endl;

	std::cout << "text3Str = " << text3Str << endl;

	std::cout << "text4Str = " << text4Str << " size = " << sizeof(text4Str) << endl;

	std::cout << "text5Str = " << text5Str << " size = " << sizeof(text5Str) << endl;

	return 0;
}
