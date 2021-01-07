//#include <iostream>
//#include <string>
//using String = std::string;
//
//class Entity
//{
//private:
//	String m_Name;
//public:
//	Entity() : m_Name("Unknown") {}
//	Entity(const String& name) : m_Name(name) {}
//	const String& GetName() const { return m_Name; }
//};
//
//int main()
//{
//	std::cout << "C" << std::endl;
//	std::cin.get();
//}

#include <iostream>
#include <string>
//using String = std::string;

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;

public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		//for (int i = 0; i < m_Size; i++)
		//	m_Buffer[i] = string[i];
		memcpy(m_Buffer, string, m_Size);
		//adding null character
		m_Buffer[m_Size] = 0;
	}

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

	String(const String& other)
		: m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}
	
	~String()
	{
		delete[] m_Buffer;
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);

	//cannot edit string when use const
	//always pass objects by const reference
	void PrintString(const String& string)
	{
		std::cout << string << std::endl;
	}

	
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

struct Vector2
{
	float x, y;
};

int main()
{
	//always copying the value not the memory address
	int a = 2; 
	int b = a;
	b = 3;
	Vector2* c = new Vector2();
	Vector2* d = c;
	d->x = 5;


	String string = "Cherno";
	String string2 = string;
	string2[2] = 'a';
	std::cout << string << std::endl;
	std::cout << string2 << std::endl;
	std::cin.get();
}