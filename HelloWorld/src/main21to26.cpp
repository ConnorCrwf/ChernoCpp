#include <iostream>

//Lessons 
//22 - Static for Classes and Structs
//23 - Local Static 
//24 - Enums

//extern int s_Variable;

//void Funct()
//{
//
//}


//Lesson 22 - 
//struct Entity
//{
//	static int x, y;
//
//	static void Print()
//	{
//		std::cout << x << ", " << y << std::endl;
//	}
//};
//
//static void Print(Entity e)
//{
//	std::cout << e.x << ", " << e.y << std::endl;
//}
//
//int Entity::x;
//int Entity::y;

//Lesson 23

//void Function()
//{
//	static int i = 0;
//	i++;
//	std::cout << i << std::endl;
//}

//class Singleton
//{
//private:
//	static Singleton* s_Instance;
//public:
//	static Singleton& Get() { return *s_Instance; }
//
//	void Hello() {}
//};

//Singleton* Singleton::s_Instance = nullptr;


//class Singleton
//{
//public:
//	static Singleton& Get() 
//	{ 
//		static Singleton instance;
//		return instance; 
//	}
//
//	void Hello() {}
//};


//Ls 24
//enum Example : char
//{
//	A, B, C
//};
//
//int a = 0;
//int b = 1;
//int c = 2;


//Ls 25, 26

class Entity
{
public:
	//Entity() = delete;

	/*static void Write()
	{

	}*/

	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Construct" << std::endl;
	}

	//Entity(float x, float y)
	//{
	//	X = x;
	//	Y = y;
	//}

	~Entity()
	{
		std::cout << "Destroy" << std::endl;
	}

	void Print()
	{
		std::cout << X << "," << Y << std::endl;
	}

};

// Ls 26
void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	//Lesson 22 
	//Entity e;
	//e.x = 2;
	//e.y = 3; 

	//Entity e1;
	//e1.x = 5;
	//e1.y = 8;
	////Entity::x = 5;
	////Entity::y = 8;

	//e.Print();
	//e1.Print();
	//
	//Entity::Print();

	//std::cout << s_Variable << std::endl;

	//Lesson 23
	/*Function();
	Function();
	Function();
	Function();
	Function();*/

	//Singleton::Get().Hello();

	//Ls - 24
	/*Example value = B;
	if (value == 1)
	{

	}*/

	
	//Ls - 25
	/*Entity e1;
	Entity e2(10.0f, 5.0f);
	e1.Print();
	e2.Print();*/

	/*Entity::Write();
	Entity e2;*/

	//Ls - 26
	Function();
	std::cin.get();

}