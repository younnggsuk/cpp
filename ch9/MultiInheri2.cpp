#include <iostream>

using std::cout;
using std::endl;

class BaseOne
{
public:
	void SimpleFunc() { cout<<"SimpleFuncOne()"<<endl; }
};

class BaseTwo
{
public:
	void SimpleFunc() { cout<<"SimpleFuncTwo()"<<endl; }
};

class Derived : public BaseOne, protected BaseTwo
{
public:
	void ComplexFunc()
	{
		// Ambiguous code
		//SimpleFunc();
		//SimpleFunc();
		BaseOne::SimpleFunc();
		BaseTwo::SimpleFunc();
	}
};

int main()
{
	Derived drv;
	drv.ComplexFunc();

	return 0;
}
