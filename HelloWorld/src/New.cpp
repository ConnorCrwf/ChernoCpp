//#include <iostream>
//#include <string>
//using String = std::string;
//
//int main()
//{
//
//	std::cin.get();
//}

#include <iostream>
#include <string>
using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}
	const String& GetName() const { return m_Name; }
};

int main()
{
	int a = 2;
	int* b = new int[50]; //200 bytes
	//new allocates memory and also calls constructor
	Entity* e = new(b) Entity();
	//Entity* e = (Entity*)malloc(sizeof(Entity));
	//also calls the destructor method
	delete  e;
	delete[] b;
	std::cin.get();
}