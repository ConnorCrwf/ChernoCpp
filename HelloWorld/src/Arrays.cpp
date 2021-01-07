#include <iostream>
#include <array>

//each integer is 4 bytes


//int main()
//{
//	int example[5];
//	int* ptr = example;
//	for (int i = 0; i < 5; i++)
//		example[i] = 2;
//	example[2] = 5;
//	//this adds 2*4bytes to the pointer (4 bytes is size of integer)
//	//*(ptr + 2) = 6;
//	*(int*)((char*)ptr + 8) = 6;
//
//	/*example[0] = 2;
//	example[4] = 4;*/
//
//	std::cout << example[0] << std::endl;
//	std::cout << example << std::endl;
//
//	std::cin.get();
//}

class Entity
{
public:
	static const int exampleSize = 5;
	int example[exampleSize];
	//int example[5];
	//this creates example pointer on the heap and going to &e will only take you to memory address and then going to that memory address in debugger will show you the values
	//int* example[5] = new int[5];

	std::array<int, 5> another;

	Entity()
	{
		for (int i = 0; i < exampleSize; i++)
			example[i] = 2;

		for (int i = 0; i < another.size(); i++)
			example[i] = 2;

		int a[5];
		//can only use this trick with stack-allocated arrays
		int count = sizeof(a) / sizeof(int);
		int count = sizeof(example) / sizeof(int);

	}

};

//Always want to create an array on the stack for performance reasons

int main()
{
	Entity e;

	/*int* another = new int[5];
	for (int i = 0; i < 5; i++)
		another[i] = 2;
	delete[] another;*/

	std::cin.get();
}


