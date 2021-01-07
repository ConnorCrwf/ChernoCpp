#include <iostream>
#include <string>

class Entity
{
private:
	int m_X, m_Y;
	mutable int var;
public:
	//prevents you from modifying the class members when you use const
	int GetX() const
	{
		return m_X;
	}
	void SetX(int x)
	{
		m_X = x;
	}
};


void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}

int main()
{
	const int MAX_AGE = 90;

	//cannot change the contents of the pointer but can change memory address (point it to something else)
	const int* a = new int;
	//*a = 2;
	a = (int*)&MAX_AGE;

	// can change contens but not the memory address
	int* const b = new int;
	//mean same thing
	//const int* b = new int;
	*b = 2;
	//b = (int*)&MAX_AGE;

	std::cout << *a << std::endl;

	Entity e; 


	std::cin.get();
}