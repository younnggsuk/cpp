#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
private:
	int num1;
	int num2;
public:
	Simple(int n1=0, int n2=0)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowInfo() const
	{
		cout<<num1<<' '<<num2<<endl;
	}
};

int main(void)
{
	Simple sc(); // function prototype declaration, not constructor
			     // Simple sc() <-- constructor(x), function call(o)
				 // Simple sc   <-- constructor(o), function call(x)
	
	Simple mys = sc();
	mys.ShowInfo();
	return 0;
}

Simple sc()
{
	Simple s(20, 30);
	return s;
}
