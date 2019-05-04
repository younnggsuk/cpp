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
	Simple s;
	Simple &r = s;

	try
	{
		Complex &cr = dynamic_cast<Complex&>(r);
		cr.Show();
	}
	catch(bad_cast expt)
	{
		cout<<expt.what()<<endl;
	}
	
	return 0;
}
