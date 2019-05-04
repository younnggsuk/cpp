#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple {
private:
	int num;
public:
	Simple(int n) : num(n)
	{
		cout<<"New Obj : "<<this<<endl;
	}
	Simple(const Simple &copy) : num(copy.num)
	{
		cout<<"New Copy : "<<this<<endl;
	}
	~Simple()
	{
		cout<<"Destroy Obj : "<<this<<endl;
	}
};

Simple SimpleObj(Simple ob)
{
	cout<<"Param : "<<&ob<<endl;
	return ob;
}	

int main(void)
{
	Simple obj(10);
	SimpleObj(obj);

	cout<<endl;

	Simple obj2 = SimpleObj(obj);
	cout<<"Return Obj : "<<&obj2<<endl;

	return 0;
}
