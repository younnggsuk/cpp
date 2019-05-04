#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Number
{
private:
	int num;
public:
	Number(int n) : num(n) 
	{ 
		cout<<"Object created"<<endl; 
	}
	Number& Adder(int n)
	{
		num += n;
		return *this;
	}
	Number& ShowData()
	{
		cout<<num<<endl;
		return *this;
	}
};

int main(void)
{
	Number num(4);
	Number &ref = num.Adder(2);

	num.ShowData();
	ref.ShowData();

	num.Adder(10).ShowData().Adder(20).ShowData();

	return 0;
}
