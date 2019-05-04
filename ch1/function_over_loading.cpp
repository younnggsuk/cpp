#include <iostream>

void func(void)
{
	std::cout<<"func(void) called"<<std::endl;
}

void func(char ch)
{
	std::cout<<"func(char ch) called"<<std::endl;
}

void func(int a, int b)
{
	std::cout<<"func(int a, int b) called"<<std::endl;
}

int main(void)
{	
	func();
	func('\0');
	func(10, 20);

	return 0;
}
