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
};

int main()
{
	Number num;
	num = 30;
	num.ShowNum();
	return 0;
}
