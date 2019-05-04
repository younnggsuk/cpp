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
	First& operator=(const First& ref)
	{
		num1 = ref.num1;
		num2 = ref.num2;
		return *this;
	}
	void ShowData() const
	{
		cout<<num1<<", "<<num2<<endl;
	}
};

class Second : public First
{
private:
	int num3, num4;
public:
	Second(int n1=0, int n2=0, int n3=0, int n4=0)
		: First(n1, n2), num3(n3), num4(n4)
	{ }
	Second& operator=(const Second& ref)
	{
		First::operator=(ref);
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}
	void ShowData() const
	{
		First::ShowData();
		cout<<num3<<", "<<num4<<endl;
	}
};

int main()
{
	Second ssrc(111, 222, 333, 444);
	Second scpy(0, 0, 0, 0);
	scpy = ssrc;
	scpy.ShowData();

	return 0;
}
