#include <iostream>
using std::cout;
using std::endl;

class Number
{
private:
	int num;
public:
	Number(int n=0) : num(n)
	{
		cout<<"Number(int n=0)"<<endl;
	}
	Number& operator=(const Number &ref)
	{
		cout<<"operator=()"<<endl;
		num = ref.num;
		return *this;
	}
	void ShowNum() const
	{
		cout<<num<<endl;
	}
	operator int()
	{
		return num;
	}
};

int main()
{
	Number num1;
	num1 = 20;

	Number num2 = num1+30;
	num2.ShowNum();

	return 0;
}

