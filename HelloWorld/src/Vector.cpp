#include <iostream>
#include <string>
using String = std::string;
#include <vector>

//create a vector then you start pushing back elements
//need to make sure that the vector allocates enough memory for previous amount of existing elements and added elements that were pushed back

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z)
	{

	}

	Vertex(const Vertex& vertex)
		:x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}

};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

//passing in my reference to avoid copying the variables
void Function(const std::vector<Vertex>& vertices)
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
	/*ertex* vertices = new Vertex[500000];*/
	std::vector<Vertex> vertices;
	//makes sure we have enough memory to hold the vertex values
	vertices.reserve(3);
	//vertices.push_back(Vertex(1,2,3));
	vertices.emplace_back(1,2,3);
	//resized to 2 when the next line is executed
	vertices.emplace_back(4,5,6);
	vertices.emplace_back(7,8,9);

	/*for (Vertex& v : vertices)
		std::cout << v << std::endl;*/



	std::cin.get();
}