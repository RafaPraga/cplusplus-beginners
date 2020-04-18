/*
 * Person.cpp
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

#include "Person.h"
#include <sstream>

Person::Person() : name(""), age(0) {


}

Person::Person(string name, int age) : name(name), age(age) {

	cout << "Memory location of object: " << this << endl;
}


string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}



