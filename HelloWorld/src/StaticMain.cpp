#include <iostream>
#include <string>
using String = std::string;

//try to make variables static unless you need to use them across translation units

extern int s_Variable;

void Function()
{

}


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

	std::cout << s_Variable << std::endl;
	std::cin.get();
}