#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
private:
	int num;
public:
	Simple(int n) : num(n){}
	Simple(const Simple &copy) : num(copy.num)
	{
		cout<<"Simple(const Simple &copy);"<<endl;
	}
	void ShowData()
	{
		cout<<"num : "<<num<<endl;
	}
};

void SimpleObj(Simple ob)
{
	ob.ShowData();
}

int main(void)
{
	Simple obj(10);
	cout<<"before"<<endl;
	SimpleObj(obj);
	cout<<"After"<<endl;

	return 0;
}
