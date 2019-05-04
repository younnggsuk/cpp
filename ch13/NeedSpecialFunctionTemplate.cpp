#include <iostream>
using namespace std;

template <typename T>
T Max(T n1, T n2)
{
	return (n1>n2) ? n1 : n2;
}

int main()
{
	cout<<Max(11, 15)<<endl;
	cout<<Max('T', 'Q')<<endl;
	cout<<Max(3.5, 7.5)<<endl;
	cout<<Max("Simple", "Best")<<endl;

	return 0;
}
