#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int main(void)
{
	int num=10;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;

	cout<<ref<<endl;
	cout<<*pref<<endl;
	cout<<**dpref<<endl;

	return 0;
}

