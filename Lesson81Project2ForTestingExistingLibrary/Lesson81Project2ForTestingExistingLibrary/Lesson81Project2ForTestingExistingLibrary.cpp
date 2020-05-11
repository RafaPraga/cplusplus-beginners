// Lesson81Project2ForTestingExistingLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "C:\Users\user\Documents\RAFA\Repos\RafaPraga\cplusplus-beginners\Lesson81CleanLibs\Cat.h"

using namespace caveofprogramming;


int main()
{
    Cat Animal2;

    std::cout << "Hello World!\n";

    Animal2.speak();
    saySomething();
}



/* For this program, I modified:

    (1) Project Properties -> VC++ Directories -> Library Directories
    (2) Project Properties -> Linker -> Input -> Additional Dependencies

   I didn't modify this: Project Properties -> VC++ Directories -> Include Directories
*/