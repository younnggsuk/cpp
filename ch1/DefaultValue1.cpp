#include <iostream>

int Adder(int n1=1, int n2=2)
{
	return n1+n2;
}

int main(void)
{
	std::cout<<Adder()<<std::endl;
	std::cout<<Adder(10)<<std::endl;
	std::cout<<Adder(10, 20)<<std::endl;

	return 0;
}
