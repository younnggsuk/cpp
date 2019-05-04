#include <iostream>
using namespace std;

template <typename T>
T Add(T n1, T n2)
{
	cout<<"T Add(T n1, T n2)"<<endl;
	return n1+n2;
}
int Add(int n1, int n2)
{
	cout<<"int Add(int n1, int n2)"<<endl;
	return n1+n2;
}
double Add(double n1, double n2)
{
	cout<<"double Add(double n1, double n2)"<<endl;
	return n1+n2;
}

int main()
{
	cout<<Add(5, 7)<<endl;
	cout<<Add(3.7, 7.5)<<endl;
	cout<<Add<int>(5, 7)<<endl;
	cout<<Add<double>(3.7, 7.5)<<endl;

	return 0;
}
