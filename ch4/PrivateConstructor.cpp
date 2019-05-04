#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class AAA
{
private:
	int num;
	AAA(int n) : num(n) {}
public:
	AAA() : num(0) {}
	AAA& InitObject(int n)
	{
		AAA *ptr = new AAA(n);
		return *ptr;
	}
	void ShowInfo() const { cout<<num<<endl; }
};

int main(void)
{
	AAA obj1;
	obj1.ShowInfo();

	AAA &obj2 = obj1.InitObject(3);
	obj2.ShowInfo();

	AAA &obj3 = obj1.InitObject(12);
	obj3.ShowInfo();

	delete &obj2;
	delete &obj3;

	return 0;
}
