#include <iostream>


//Entity Class
class Entity
{
public:  //could also be protected or private but that changes what you can do in main and the Player class
	int X, Y;

	void Print() {}
public:
	Entity()
	{
		X = 0;
		Print();
	}
};

//Player Class
class Player : public Entity
{
public:
	Player()
	{
		X = 2;
		Print();
	}

};


int main()
{
	Entity e;
	e.Print();
	e.X = 2;


	std::cin.get();
}