#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
private:
	int num1, num2;
public:
	Simple(int n1, int n2) : num1(n1), num2(n2) {}
	Simple(Simple &ref) : num1(ref.num1), num2(ref.num2)
	{
		cout<<"Simple(Simple &ref);"<<endl;
	}
	void ShowData()
	{
		cout<<"num1 : "<<num1<<endl;
		cout<<"num2 : "<<num2<<endl;
	}
};

int main(void)
{
	Simple s1(10, 30);
	cout<<"Before Object Creation & Initialization"<<endl;
	Simple s2 = s1;
	cout<<"After Object Creation & Initialization"<<endl;
	s2.ShowData();

	return 0;
}
