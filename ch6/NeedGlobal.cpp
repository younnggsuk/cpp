#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int simCnt = 0;
int comCnt = 0;

class Simple
{
public:
	Simple()
	{
		simCnt++;
		cout<<simCnt<<" Simple Obj"<<endl;
	}
};

class Complex
{
public:
	Complex()
	{
		comCnt++;
		cout<<comCnt<<" Complex Obj"<<endl;
	}
	Complex(const Complex &copy)
	{
		comCnt++;
		cout<<comCnt<<" Complex Obj"<<endl;
	}
};

int main()
{
	Simple sim1;
	Simple sim2;

	Complex com1;
	Complex com2 = com1;
	Complex();

	return 0;
}
