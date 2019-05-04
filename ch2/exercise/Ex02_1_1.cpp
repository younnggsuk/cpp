#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void IncreaseNum(int &num)
{
	num++;
}

void ChangeSign(int &num)
{
	num = -num;
}

int main(void)
{
	int num = 10;

	cout<<"num : "<<num<<endl;
	
	cout<<"IncreaseNum(num)"<<endl;
	IncreaseNum(num);
	cout<<"num : "<<num<<endl;
	
	cout<<"ChangeSign(num)"<<endl;
	ChangeSign(num);
	cout<<"num : "<<num<<endl;

	return 0;
}

