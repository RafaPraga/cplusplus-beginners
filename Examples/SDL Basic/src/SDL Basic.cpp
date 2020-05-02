//============================================================================
// Name        : SDL.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
using namespace std;

int main(int argc, char* args[]) {

	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL init failed." << endl;
		return 1;
	}

	cout << "SDL Init succeeded." << endl;

	SDL_Quit();

	return 0;
}


/*Steps for setting up the SDL2:

1)	Go to: Project / "your project name" Properties... /

	At Configuration select All Configurations

2) Go to: Project / "your project name" Properties... / Configuration Properties / VC++ Directories /

	At Include Directories add path to your SDL include folder
	At Library Directories add path to your SDL lib folder ( lib/x86 or lib/x64 )

3)	Go to: Project / "your project name" Properties... / Configuration Properties / Linker / Input /

	At Additional Dependencies add ( in this order ):
	SDL2.lib
	SDL2main.lib

4)	Then copy all the .dll files from "your SDL folder" / lib / ( x86 or x64 ) to your Visual Studio project folder ( the debug folder in the location where your ..vcxproj file is ).

5)	Don't forget to use #include <SDL.h> in your code.

6)  Also change int main() function in main.cpp with int main(int argc, char* args[]).

(Taken from: https://stackoverflow.com/questions/57732058/how-do-i-link-sdl-with-visual-studio-2019. But Ihad to make a major modification to step 4.)

*/
