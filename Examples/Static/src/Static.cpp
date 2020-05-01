//============================================================================
// Name        : Static.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include "myHeader.h"


using namespace std;

/*Exercise 4: Try incrementing static int field with a postfix increment operator.*/
int NewsVideo::countInt = 0;


int main() {

	cout << NewsVideo::ORIGINAL_SOURCE_Str << endl; /*Exercise 1: Define and output a public static constant*/
	cout << "----------------------------" << endl;
	NewsVideo::viewConstantList();	/*Exercise 3: Output a static field with a static member.*/

	cout << "----------------------------" << endl;

	

	NewsVideo video1{150, 30, 10};

	cout << "----------------------------" << endl;
	cout << video1.getLengthLng() << endl;  /*Exercise 2: Define and output a non-static field.*/
	cout << video1.getWidthInt() << endl;
	cout << video1.getHeightLng() << endl;
	cout << video1.getOrderInt() << endl;

	cout << "----------------------------" << endl;

	NewsVideo video2{ 1000, 300, 100 };

	cout << "----------------------------" << endl;
	cout << video2.getLengthLng() << endl;
	cout << video2.getWidthInt() << endl;
	cout << video2.getHeightLng() << endl;
	cout << video2.getOrderInt() << endl;

	cout << "----------------------------" << endl; 

	return 0;
}
