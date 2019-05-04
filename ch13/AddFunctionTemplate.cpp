#include <iostream>

using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1+num2;
}

int main()
{
	cout<<Add<int>(3, 4)<<endl;
	cout<<Add<double>(3.4, 3.5)<<endl;
	cout<<Add<int>(3.4, 3.5)<<endl;
	
	cout<<Add(3, 4)<<endl;
	cout<<Add(3.4, 3.5)<<endl;
	return 0;
}
