#include <iostream>
#include <string>

//const means we are promising not to modify it
//ref means the variable won't get copied

void PrintString(const std::string& string)
{
	std::cout << string << std::endl;
}

int main()
{
	/*char* name = 'Cherno';
	char* name2[7] = { 'C', 'h', 'e','r','n','o','\0' };
	std::cout << name2 << std::endl;
	name[2] = 'a';*/

	std::string name = std::string("Cherno") + " hello!";
	name.size();
	bool contains = name.find("no") != std::string::npos;
	std::cout << name << std::endl;
	

	std::cin.get();
}