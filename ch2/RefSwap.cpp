#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void SwapByRef2(int &ref1, int &ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int n1 = 10;
	int n2 = 20;

	cout<<"n1 : "<<n1<<endl;
	cout<<"n2 : "<<n2<<endl;

	SwapByRef2(n1, n2);
	cout<<"Swap By Reference"<<endl;

	cout<<"n1 : "<<n1<<endl;
	cout<<"n2 : "<<n2<<endl;

	return 0;
}
