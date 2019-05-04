#include <iostream>

using std::cout;
using std::endl;

class BaseOne
{
public:
	void SimpleFuncOne() { cout<<"SimpleFuncOne()"<<endl; }
};

class BaseTwo
{
public:
	void SimpleFuncTwo() { cout<<"SimpleFuncTwo()"<<endl; }
};

class Derived : public BaseOne, protected BaseTwo
{
public:
	void ComplexFunc()
	{
		SimpleFuncOne();
		SimpleFuncTwo();
	}
};

int main()
{
	Derived drv;
	drv.ComplexFunc();

	return 0;
}
