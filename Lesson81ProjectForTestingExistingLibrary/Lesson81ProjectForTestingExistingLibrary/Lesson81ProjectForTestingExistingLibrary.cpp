// Lesson81ProjectForTestingExistingLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Cat.h>

using namespace caveofprogramming;

int main()
{
    Cat myAnimal;


    std::cout << "Hello World!\n";

    myAnimal.speak();

    saySomething();
}

/* For this program, I modified:

    (1) Project Properties -> VC++ Directories -> Include Directories
    (2) Project Properties -> VC++ Directories -> Library Directories
    (3) Project Properties -> Linker -> Input -> Additional Dependencies

*/
