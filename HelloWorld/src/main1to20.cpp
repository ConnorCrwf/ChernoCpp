#include <iostream>
#include "Math.h"

#define LOG(x) std::cout << x <<std::endl

#define struct class

void Increment(int& value) {
	// without start would just incremenet the memory address not the value
	//(*value)++;
	value++;
}

class Player
{
public:
	int x = 1;
	int y = 1;
	int speed = 2;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

struct Vec2
{
	float x, y;
	void Add(const Vec2& other)
	{
		x += other.x;
		y += other.y;
	}

};

//passing by reference bc we are modifying player object

class Log
{
public: 
	const int LogLevelWarning = 1;
	const int LogLevelError = 0;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]" << message << std::endl;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]" << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]" << message << std::endl;
	}
};


int main1to20()
{
	
	//Log("Hello World");
	//std::cout << "Hello World" << std::endl;
	//std::cout.print("Hello World").print(std::endl);

	/*std::cout << Multiply(5, 8) << std::endl;
	std::cin.get();*/


	//Pointers - 16

	//int var = 8;
	////double* ptr = (double*)&var;
	//int* ptr = &var;
	//*ptr = 10;
	//LOG(var);\

	/*char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** ptr = &buffer;
	delete[] buffer;

	std::cin.get();*/

	//References - 17
	/*int a = 5;
	int b = 8;
	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;*/
	// a = 8, b = 8

	//int& ref = a;
	//Increment(&a);
	//Increment(a);
	//int* b = &a;
	//int& ref = a;
	//ref = 2;
	/*LOG(a);
	LOG(b);*/

	//Classes - 18
	/*Player player;
	player.Move(1, -1);*/

	//Classes vs Structs - 19

	//How to Write a C++ Class - 20

	Log log;
	//log.SetLevel(log.LogLevelWarning);
	log.Warn("Hello!");
	log.Info("Hello!");
	log.Error("Hello!");



	std::cin.get();



}