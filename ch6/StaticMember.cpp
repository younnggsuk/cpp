#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
private:
	static int simCnt;
public:
	Simple()
	{
		simCnt++;
		cout<<simCnt<<" Simple Obj"<<endl;
	}
};
int Simple::simCnt=0;

class Complex
{
private:
	static int comCnt;
public:
	Complex()
	{
		comCnt++;
		cout<<comCnt<<" Complex Obj"<<endl;
	}
	Complex(Complex &copy)
	{
		comCnt++;
		cout<<comCnt<<" Complex Obj"<<endl;
	}
};
int Complex::comCnt = 0;

int main()
{
	Simple sim1;
	Simple sim2;

	Complex com1;
	Complex com2 = com1;
	Complex();

	return 0;
}
