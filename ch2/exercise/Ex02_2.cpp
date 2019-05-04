#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	const int num = 12;
	const int *ptr = &num;
	const int *(&pref) = ptr;

	cout<<"*ptr : "<<*ptr<<endl;
	cout<<"*pref : "<<*pref<<endl;

	return 0;
}
