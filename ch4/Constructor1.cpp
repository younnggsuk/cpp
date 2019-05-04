#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
private:
	int n1, n2;
public:
	Simple()
	{
		n1 = 0;
		n2 = 0;
	}
	Simple(int n)
	{
		n1 = n;
		n2 = 0;
	}
	Simple(int num1, int num2)
	{
		n1 = num1;
		n2 = num2;
	}
//	Simple(int num1=0, int num2=0)
//	{
//		n1 = num1;
//		n2 = num2;
//	}

	void ShowInfo() const
	{
		cout<<n1<<' '<<n2<<endl;
	}
};

int main(void)
{
	Simple s1;
	s1.ShowInfo();
	
	Simple s2(100);
	s2.ShowInfo();

	Simple s3(100, 200);
	s3.ShowInfo();

	return 0;
}
