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
	Simple(const Simple &copy) : num(copy.num) 
	{
		cout<<"Called Simple(const Simple &copy)"<<endl;
	}
	Simple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout<<"num : "<<num<<endl;
	}
};

Simple SimpleObj(Simple ob)
{
	cout<<"return Simple(const Simple &copy)"<<endl;
	return ob;
}	

int main(void)
{
	Simple obj1(7);
	SimpleObj(obj1).AddNum(30).ShowData();
	obj1.ShowData();

	return 0;
}
