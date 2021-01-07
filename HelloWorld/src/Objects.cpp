#include <iostream>
#include <string>

//stack objects have a definite lifespan
//heap objects sit there until you free that space

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	//why can't name be passed in not as a reference?
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }

};


int main()
{
	//stack
	/*Entity entity("Cherno");
	std::cout << entity.GetName() << std::endl;*/

	//heap
	Entity* e;
	{
		//returns location on heap where Entity has been constructed
		//responbile for freeing memory
		Entity* entity = new Entity("Cherno");
		//don't need & in front of entity since entity is already a pointer
		//this just gets the memory address of entity in the e variable
		e = entity;
		std::cout << (*entity).GetName() << std::endl;
		//std::cout << entity->GetName() << std::endl;
	}
	
	delete e;
	std::cin.get();
	
}

