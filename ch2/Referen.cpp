#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	int n1=1000;
	int &n2=n1;
	
	n2 = 2000;

	cout<<"val : "<<n1<<endl;
	cout<<"ref : "<<n2<<endl;
	
	cout<<"&val : "<<&n1<<endl;
	cout<<"&ref : "<<&n2<<endl;

	
	return 0;
}
