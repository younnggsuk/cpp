#include <iostream>

int main(void)
{
	char name[100];
	char lang[100];

	std::cout<<"What's your name? ";
	std::cin>>name;

	std::cout<<"What's your favorite programming language? ";
	std::cin>>lang;

	std::cout<<"\nMy name is "<<name<<"\n";
	std::cout<<"My favorite programming language is "<<lang<<std::endl;

	return 0;
}
