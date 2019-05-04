#include <iostream>
using namespace std;

class Simple
{
public:
	virtual void Show()
	{
		cout<<"Simple"<<endl;
	}
};

class Complex : public Simple
{
public:
	void Show()
	{
		cout<<"Complex"<<endl;
	}
};

int main()
{
	Simple *s = new Simple;
	Complex *c = dynamic_cast<Complex*>(s);

	if(c == NULL)
		cout<<"NULL"<<endl;
	else
		c->Show();

	return 0;
}
