#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
	Base() { cout<<"Base Constructor"<<endl; }
	void Simple() { cout<<"Base Function"<<endl; }
};

class MiddleOne : virtual public Base
{
public:
	MiddleOne() : Base() { cout<<"MiddleOne Constructor"<<endl; }
	void MiddleFuncOne() 
	{
		Simple();
		cout<<"Middle One Function"<<endl; 
	}
};

class MiddleTwo : virtual public Base
{
public:
	MiddleTwo() : Base() { cout<<"MiddleTwo Constructor"<<endl; }
	void MiddleFuncTwo() 
	{
		Simple();
		cout<<"Middle Two Function"<<endl; 
	}
};

class Last : public MiddleOne, public MiddleTwo
{
public:
	Last() : MiddleOne(), MiddleTwo()
	{
		cout<<"Last Constructor"<<endl;
	}
	void Complex()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		Simple();
	}
};

int main()
{
	cout<<"Before Making Object"<<endl;
	Last last;
	cout<<endl;

	cout<<"After Making Object"<<endl;
	last.Complex();
	return 0;
}
