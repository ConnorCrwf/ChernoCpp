#include <iostream>
#include <string>
using String = std::string;


//if you create a variable on the stack it will be deleted when you go out of scope
class Entity
{
public:
	Entity()
	{
		std::cout << "C" << std::endl;
	}
	~Entity()
	{
		std::cout << "D" << std::endl;
	}

};

class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		:m_Ptr(ptr)
	{

	}
	~ScopedPtr()
	{
		delete m_Ptr;
	}
};

void CreateArray(int* array)
{
	//
}

int main()
{
	int array[50];
	CreateArray(array);
	{
		//Entity e;
		//heap allocation
		//Entity* e = new Entity();
		ScopedPtr e(new Entity());

	}
	std::cin.get();
}