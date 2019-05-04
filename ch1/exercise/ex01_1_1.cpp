#include <iostream>

int main(void)
{
	int temp;
	int res=0;

	for(int i=0; i<5; i++)
	{
		std::cout<<"Input num"<<i+1<<" : ";
		std::cin>>temp;
		res += temp;
	}

	std::cout<<"sum : "<<res<<std::endl;

	return 0;
}	
