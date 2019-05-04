#include <iostream>

using std::endl;
using std::cout;
using std::cin;

bool IsPositive(int num)
{
	if(num<0)
		return false;
	else
		return true;
}

int main(void)
{
	bool isPos;
	int num;

	cout<<"Input num : ";
	cin>>num;

	if((isPos = IsPositive(num)))
		cout<<"Positive"<<endl;
	else
		cout<<"Negative"<<endl;

	return 0;
}	
