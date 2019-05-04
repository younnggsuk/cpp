#include <iostream>

int main(void)
{
	int sales;
	
	while(1)
	{
		std::cout<<"Input amount of sales(-1 to exit) : ";
		std::cin>>sales;

		if(sales == -1)
			break;

		int res = 50.0;
		res += (sales*0.12);

		std::cout<<"This month's salary : "<<res<<std::endl;
	}

	return 0;
}

