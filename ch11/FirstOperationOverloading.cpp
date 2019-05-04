#include <iostream>

using std::cout;
using std::endl;

class First
{
private:
	int num1, num2;
public:
	First(int n1=0, int n2=0) : num1(n1), num2(n2)
	{ }
	void ShowData() const
	{
		cout<<num1<<", "<<num2<<endl;
	}
};

class Second
{
private:
	int num3, num4;
public:
	Second(int n3=0, int n4=0) : num3(n3), num4(n4)
	{ }
	void ShowData() const
	{
		cout<<num3<<", "<<num4<<endl;
	}
	Second& operator=(const Second& ref)
	{
		cout<<"Second& operator=()"<<endl;
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}
};

int main()
{
	First fsrc(111, 222);
	First fcpy;
	Second ssrc(333, 444);
	Second scpy;
	
	fcpy = fsrc;
	scpy = ssrc;
	
	fcpy.ShowData();
	scpy.ShowData();

	First fobj1, fobj2;
	Second sobj1, sobj2;

	fobj1 = fobj2 = fsrc;
	sobj1 = sobj2 = ssrc;

	fobj1.ShowData();
	fobj2.ShowData();
	sobj1.ShowData();
	sobj2.ShowData();

	return 0;
}
