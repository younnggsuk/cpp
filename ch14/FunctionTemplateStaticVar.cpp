#include <iostream>
using namespace std;

template <typename T>
void ShowStaticValue()
{
	static T num = (T)0;
	num += (T)1;
	cout<<num<<' ';
}

int main()
{
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	cout<<endl;

	ShowStaticValue<double>();
	ShowStaticValue<double>();
	ShowStaticValue<double>();
	cout<<endl;

	ShowStaticValue<long>();
	ShowStaticValue<long>();
	ShowStaticValue<long>();
	cout<<endl;

	return 0;
}
