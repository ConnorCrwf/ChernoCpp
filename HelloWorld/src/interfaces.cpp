#include <iostream>
//Printable class
class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

//Entity Class
class Entity : public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() override {return "Entity";}
};

//Player Class
class Player : public Entity, Printable
{
	private:
		std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {} 

	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player"; }

};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
};

class A : public Printable
{
public:
	std::string GetClassName() override { return "A"; }
};

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	Print(e);

	Player* p = new Player("Cherno");
	Print(p);
	Print(new A());

	Entity* entity = p;
	Print(entity);

	std::cin.get();
}