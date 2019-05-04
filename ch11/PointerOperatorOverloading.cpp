#include <iostream>
using std::cout;
using std::endl;

class Number
{
private:
	int num;
public:
	Number(int n) : num(n) {}
	void ShowData() const { cout<<num<<endl; }
	Number& operator*()
	{
		return *this;
	}
	Number* operator->()
	{
		return this;
	}
};

int main()
{
	Number num(10);
	num.ShowData();
	
	(*num)=30;
	num->ShowData();
	(*num).ShowData();

	return 0;
}
