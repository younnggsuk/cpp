#include <iostream>
using namespace std;

class Base
{
public:
	virtual void Show()
	{
		cout<<"Base"<<endl;
	}
};

class Deriv : public Base
{
public:
	void Show()
	{
		cout<<"Deriv"<<endl;
	}
};

int main()
{
	Base *b = new Deriv;
	Deriv *d = dynamic_cast<Deriv*>(b);
	d->Show();

	delete b;

	return 0;
}
