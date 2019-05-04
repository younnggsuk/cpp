#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
private:
	int num;
public:
	Simple(int n) : num(n) {}
	void SimpleFunc()
	{
		cout<<"SimpleFunc() : "<<num<<endl;
	}
	void SimpleFunc() const
	{
		cout<<"SimpleFunc() const : "<<num<<endl;
	}
};

void YourFunc(const Simple &ref)
{
	ref.SimpleFunc();
}

int main(void)
{
	Simple obj1(10);
	const Simple obj2(20);

	obj1.SimpleFunc();
	obj2.SimpleFunc();

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}
