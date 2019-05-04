#include <iostream>

int main(void)
{
	int n1, n2, res=0;
	std::cout<<"Input range (ex : n1 n2) : ";
	std::cin>>n1>>n2;

	if(n1<n2) 
	{
		for(int i=n1+1; i<n2; i++)
			res += i;
	} 
	else 
	{
		for(int i=n2+1; i<n1; i++)
			res += i;
	}
	
	std::cout<<"Sum of nums between n1, n2 : "<<res<<std::endl;

	return 0;
}
