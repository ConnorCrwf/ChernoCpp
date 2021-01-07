#include <iostream>
#include <string>


int main()
{
	using namespace std::string_literals;

	std::u32string name0 = U"Cherno"s + U" hello";

	const char name[8] = "Che\0rno";
	
	//name[2] = 'a';
	std::cout << strlen(name) << std::endl;

	const char16_t* name2 = u"Cherno";


	std::cin.get();
}