#include <iostream>

using std::cout;
using std::endl;

class First
{
public:
	void FirstFunc()
	{
		cout<<"FirstFunc()"<<endl;
	}
	virtual void Simple()
	{
		cout<<"First's Simple()"<<endl;
	}
};

class Second : public First
{
public:
	void SecondFunc()
	{
		cout<<"SecondFunc()"<<endl;
	}
	virtual void Simple()
	{
		cout<<"Second's Simple()"<<endl;
	}
};

class Third : public Second
{
public:
	void ThirdFunc()
	{
		cout<<"ThirdFunc()"<<endl;
	}
	virtual void Simple()
	{
		cout<<"Third's Simple()"<<endl;
	}
};

int main()
{
	Third obj;
	obj.ThirdFunc();
	obj.SecondFunc();
	obj.FirstFunc();
	obj.Simple();

	Second &sref = obj;
	sref.SecondFunc();
	sref.FirstFunc();
	sref.Simple();

	First &fref = obj;
	fref.FirstFunc();
	fref.Simple();

	return 0;
}
