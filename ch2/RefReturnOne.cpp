#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int& RefRetFuncOne(int &ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 10;
	int &num2 = RefRetFuncOne(num1);

	num1++;
	num2++;
	
	cout<<"num1 : "<<num1<<endl;
	cout<<"num2 : "<<num2<<endl;

	return 0;
}	
