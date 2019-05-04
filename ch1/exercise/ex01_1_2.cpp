#include <iostream>

int main(void)
{
	char name[100];
	char phonenum[100];

	std::cout<<"Input name : ";
	std::cin>>name;

	std::cout<<"Input phonenum : ";
	std::cin>>phonenum;

	std::cout<<"Name  : "<<name<<std::endl;
	std::cout<<"Phone : "<<phonenum<<std::endl;

	return 0;
}
