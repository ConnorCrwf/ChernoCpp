#include <iostream>
#include <string>
using String = std::string;
#include <vector>

struct Vertex
{
	float x, y, z;

};

std::ostream& operator<<(std::ostream & stream, const Vertex& vertex)
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
	vertices.push_back({ 1,2,3 });
	vertices.push_back({ 4,5,6 });
	Function(vertices);

	for (int i = 0; i < vertices.size(); i++)
		std::cout << vertices[i] << std::endl;


	vertices.erase(vertices.begin() + 1);
	//range-based for loop
	//& gets same result but doesn't copy the list of vertices
	for (Vertex& v : vertices)
		std::cout << v << std::endl;

	

	std::cin.get();
}