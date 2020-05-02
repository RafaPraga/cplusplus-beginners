
#include<iostream>
#include "myHeader.h"


NewsVideo::NewsVideo(long lengthInputLng, int widthInputInt, int heightInputInt) :
		lengthLng{ lengthInputLng },
		widthInt{ widthInputInt },
		heightInt{ heightInputInt }
	{
		orderInt = countInt++;
		std::cout << "NewsVideo objected was constructed." << std::endl;

	};

	/*Exercise 2: Define and output a non-static field.*/
long NewsVideo::getLengthLng()
	{
		return lengthLng;
	};

int NewsVideo::getWidthInt()
	{
		return widthInt;
	};

int NewsVideo::getHeightLng()
	{
		return heightInt;
	};

int NewsVideo::getOrderInt()
	{
		return orderInt;
	};

