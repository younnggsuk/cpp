#include <iostream>
using namespace std;

void ShowString(char *str)
{
	cout<<str<<endl;
}

void ShowAdd(int &n1, int &n2)
{
	cout<<n1+n2<<endl;
}

int main()
{
	const char *str = "Hello world";
	ShowString(const_cast<char*>(str));

	const int &n1 = 100;
	const int &n2 = 200;

	ShowAdd(const_cast<int&>(n1), const_cast<int&>(n2));

	return 0;
}
