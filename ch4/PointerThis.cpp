#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
private:
	int num;
public:
	Simple(int n) : num(n)
	{
		cout<<"num : "<<num<<", ";
		cout<<"address : "<<this<<endl;
	}
	void ShowSimpleData() const
	{
		cout<<num<<endl;
	}
	Simple* GetThisPointer()
	{
		return this;
	}
};

int main(void)
{
	Simple sim1(100);
	cout<<sim1.GetThisPointer();
	cout<<", ";
	sim1.ShowSimpleData();

	Simple sim2(200);
	cout<<sim2.GetThisPointer();
	cout<<", ";
	sim2.ShowSimpleData();

	return 0;
}
