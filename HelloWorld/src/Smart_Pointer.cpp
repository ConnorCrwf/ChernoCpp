#include <iostream>
#include <string>
#include <memory>
using String = std::string;

//when we call new we don't need to call delete - smart pointers
//unique pointer first pref, shared pointer second pref

class Entity
{
private:
	String m_Name;
public:
	Entity()
	{
		std::cout << "C" << std::endl;
	}
	~Entity()
	{
		std::cout << "D" << std::endl;
	}

	void Print() {}

};

int main()
{
	{
		std::shared_ptr<Entity> e0;
		{
			//std::unique_ptr<Entity> entity = std::make_unique<Entity>();
			//std::unique_ptr<Entity> e0 = entity;
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		}
		std::shared_ptr<Entity> e1;
		{
			//std::unique_ptr<Entity> entity = std::make_unique<Entity>();
			//std::unique_ptr<Entity> e0 = entity;
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		}
		std::weak_ptr<Entity> e2;
		{
			//std::unique_ptr<Entity> entity = std::make_unique<Entity>();
			//std::unique_ptr<Entity> e0 = entity;
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e2 = sharedEntity;
		}

	}

	std::cin.get();
}