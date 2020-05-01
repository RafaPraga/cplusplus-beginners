#pragma once



#include<iostream>

class NewsVideo
{
public:
	/*Exercise 1: Define and output a public static constant*/
	static constexpr const char* ORIGINAL_SOURCE_Str = "http://source.co"; /*You have to use constexpr in order to initialize nonintegers*/
	static const int MAX_LENGTH_Int = 500;

	/*Exercise 4: Try incrementing static int field with a postfix increment operator.*/
	static int countInt;

	/*Exercise 3: Output a static field with a static member.*/
	static void viewConstantList()
	{
		std::cout << "Constants in this class:" << std::endl
			<< "ORIGINAL_SOURCE_Str = " << ORIGINAL_SOURCE_Str << std::endl
			<< "MAX_LENGTH_Int = " << MAX_LENGTH_Int << std::endl;
	};

private:
	int orderInt; 
	long lengthLng;  /*Exercise 2: Define and output a non-static field.*/
	int widthInt;
	int heightInt;

public:
	NewsVideo(long lengthInputLng, int widthInputInt, int heightInputInt) :
		lengthLng{ lengthInputLng },
		widthInt{ widthInputInt },
		heightInt{ heightInputInt }
	{
		orderInt = countInt++; /*Exercise 4: Try incrementing static int field with a postfix increment operator.*/
		std::cout << "NewsVideo objected was constructed." << std::endl;

	};

	/*Exercise 2: Define and output a non-static field.*/
	long getLengthLng()
	{
		return lengthLng;
	};

	int getWidthInt()
	{
		return widthInt;
	};

	int getHeightLng()
	{
		return heightInt;
	};

	int getOrderInt()
	{
		return orderInt;
	};

};