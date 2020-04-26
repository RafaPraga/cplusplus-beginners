//============================================================================
// Name        : Copy.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Film
{
private:
	string countryStr;
	int widthInt;
	int heightInt;
	long lengthLng; /*in milliseconds*/

public:
	Film() { cout << "Constructor was called." << endl; };
	Film(const Film& other) : countryStr(other.countryStr), widthInt(other.widthInt), heightInt(other.heightInt), lengthLng(other.lengthLng) { cout << "Copy-constructor was called." << endl; other.viewDescription(); };
	
	void setCountry(string inputStr) { countryStr = inputStr; };
	void setWidthInt(int inputInt) { widthInt = inputInt; };
	void setHeightInt(int inputInt) { heightInt = inputInt; };
	void setLengthLng(long inputLng) { lengthLng = inputLng; };

	string getCountryStr() const { return countryStr; };
	long getLengthLng() const { return  lengthLng; };

	string getDimStr() const { return to_string(widthInt) + "x" + to_string(heightInt); };

	void viewDescription() const { cout << "Country: " << getCountryStr() << endl << "Dimensions: " << getDimStr() << endl << "Length: " << getLengthLng() << endl; };
};

int main(void)
{
	Film onTheWebObj;

	onTheWebObj.setWidthInt(500);
	onTheWebObj.setHeightInt(300);
	onTheWebObj.setLengthLng(600);
	onTheWebObj.setCountry("Slovakia");

	onTheWebObj.viewDescription();

	cout << endl << endl;

	Film onTheServerObj = onTheWebObj;

	cout << endl << endl;

	onTheServerObj.viewDescription();


	return 0;
}