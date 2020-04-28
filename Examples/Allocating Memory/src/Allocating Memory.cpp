//============================================================================
// Name        : Allocating.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) :
		name(other.name) {
		cout << "Animal created by copying." << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};


int main() {

	Animal* pAnimal = new Animal[10];


	char letterChr = 'a';

	for (int iInt = 0; iInt < 10; iInt++)
	{
		string nameStr(5, letterChr);
		pAnimal[iInt].setName(nameStr);

		pAnimal[iInt].speak();

		letterChr++;
	}

	/*pAnimal[5].setName("George");
	pAnimal[5].speak();*/

	delete[] pAnimal;

	/*char *pMem = new char[1000];
	delete [] pMem;


	c++;
	string name(5, c);
	cout << name << endl;*/


	return 0;
}