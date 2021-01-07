#include <iostream>
#include <string>
using String = std::string;


void PrintEntity(const Entity& e);

class Entity
{
public:
	int x, y;
	Entity(int x, int y)
	{
		Entity* const e = this;

		this->x = x;
		this->y = y;
		//or (*this).x = x;

		Entity& e = *this;
		PrintEntity(*this);
	}

	int GetX() const
	{
		const Entity& e = *this;
	}

};

void PrintEntity(const Entity& e)
{
	//
}

int main()
{

	std::cin.get();
}