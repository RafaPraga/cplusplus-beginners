#include "pch.h"
#include "Cat.h"

#include <iostream>

namespace caveofprogramming
{
	void saySomething()
	{
		std::cout << "Hello there!" << std::endl;
	}

	void Cat::speak()
	{
		std::cout << "Miaiou" << std::endl;
	}

}