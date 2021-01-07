#include <iostream>
#include <string>
using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	int x;
	void Print() const {
		std::cout << "Hello" << std::endl;
	}
};

class ScopedPtr
{
private: 
	Entity* m_Obj;
public: 
	ScopedPtr(Entity* entity)
		: m_Obj(entity)
	{

	}
	~ScopedPtr()
	{
		delete m_Obj;
	}

	Entity* operator->()
	{
		return m_Obj;		
	}
	
	const Entity* operator->() const
	{
		return m_Obj;
	}

};

struct Vector3
{
	float x, y, z;
};

int main()
{
	int offset = (int)&((Vector3*)nullptr)->z;
	std::cout << offset << std::endl;
	Entity e;
	e.Print();

	Entity* ptr = &e;
	//Entity& entity = *ptr;
	//(*ptr).Print();
	ptr->Print();
	ptr->x = 2;

	const ScopedPtr entity = new Entity();
	entity->Print();

	std::cin.get();
}