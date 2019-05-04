#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
private:
	int num1;
	mutable int num2;
public:
	Simple(int n1, int n2) : num1(n1), num2(n2) {}
	void ShowData() const
	{
		cout<<"num1 : "<<num1<<endl;
		cout<<"num2 : "<<num2<<endl;
	}
	void Num1ToNum2() const
	{
		num2 = num1;
	}
};

int main()
{
	Simple sm(10, 20);
	sm.ShowData();
	sm.Num1ToNum2();
	sm.ShowData();

	return 0;
}
