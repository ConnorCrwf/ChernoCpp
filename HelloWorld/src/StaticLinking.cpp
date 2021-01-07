//MAKE SURE THAT Solution Platforms is set to x86 if using Win32 glfw pre-compiled binaries
//also that project settings platform is set to Win32 
//Remember that x86 is 32 bit and x64 is 64 bit

//header files tell us what classes and functions are available 
//library files tell us what are the function definitions so we can link to thos functions and execute appropriate code

#include <iostream>
#include <string>

//quotes will check relative paths first and then if it doesn't find anything will look for compiler include paths
//if it's an externa dependency that I'm not compiling with solution then use < >
//if it's being compiled with solution then use " " 
#include "GLFW/glfw3.h"
//or use 
//extern "C" int glfwInit();


//dynamics lib gets linked at run-time
//static lib gets linked within .exe file

//there are include files 
//then there are lib files

//must point linker to library files


int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;
	std::cin.get();
}
