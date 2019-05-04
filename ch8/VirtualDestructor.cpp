#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class First
{
private:
	char *name;
public:
	First(const char *_name)
	{
		name = new char[strlen(_name)+1];
	}
	virtual ~First()
	{
		cout<<"~First()"<<endl;
		delete []name;
	}
};

class Second : public First
{
private:
	char *name;
public:
	Second(const char *_name1, const char *_name2) : First(_name1)
	{
		name = new char[strlen(_name2)+1];
	}
	virtual ~Second()
	{
		cout<<"~Second()"<<endl;
		delete []name;
	}
};

int main()
{
	First *fp = new Second("hello", "world");

	delete fp;

	return 0;
}
