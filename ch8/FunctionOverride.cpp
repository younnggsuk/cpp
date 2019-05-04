#include <iostream>

using std::cout;
using std::endl;

class First
{
public:
	void Func()
	{
		cout<<"First"<<endl;
	}
};

class Second : public First
{
public:
	void Func()
	{
		cout<<"Second"<<endl;
	}
};

class Third : public Second
{
public:
	void Func()
	{
		cout<<"Third"<<endl;
	}
};

int main()
{
	Third *tp = new Third();
	Second *sp = tp;
	First *fp = sp;

	tp->Func();
	sp->Func();
	fp->Func();

	delete tp;

	return 0;
}

