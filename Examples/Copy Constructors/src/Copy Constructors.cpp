//============================================================================
// Name        : Copy.cpp
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
	Animal() { cout << "Animal created." << endl; };
	Animal(const Animal& other) : name(other.name) { other.speak(); cout << "Animal created by copying." << endl; };
	void setName(string name) { this->name = name; };
	void speak()  { cout << "My name is: " << name << endl; }  /* Eliminating const has impeded the above use of other.speak()*/
};

int main() {

	Animal animal1;

	animal1.setName("Freddy");

	Animal animal2 = animal1;
	animal2.speak();
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1);
	animal3.speak();

	return 0;
}
