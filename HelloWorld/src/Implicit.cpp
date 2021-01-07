//#include <iostream>
//#include <string>
//using String = std::string;
//
//class Entity
//{
//private:
//	String m_Name;
//public:
//	Entity() : m_Name("Unknown") {}
//	Entity(const String& name) : m_Name(name) {}
//	const String& GetName() const { return m_Name; }
//};
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
	int m_Age;
public:
	//Entity() : m_Name("Unknown") {}
	Entity(const char* name) : m_Name(name), m_Age(-1) {}
	Entity(const String& name) : m_Name(name), m_Age(-1) {}
	//Entity(int age) : m_Name("Unknown"), m_Age(age) {}
	explicit Entity(int age) : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
	//
}

int main()
{

	//PrintEntity(22);
	//can only do one implicit conversion so wrap the char array with a std::string
	/*PrintEntity(String("Cherno"));
	PrintEntity(Entity("Cherno"));*/
	//implicit conversion because of how constructors are implemented
	Entity a = "Cherno";
	//Entity b = 22;
	Entity b = (Entity)22; // or Entity(22)
	std::cin.get();
}