#include <iostream>
using std::cout;
using std::endl;

class AAA
{
private:
	int num;
public:
	AAA(int n=0) : num(n)
	{
		cout<<"AAA(int n=0)"<<endl;
	}
	AAA(const AAA &ref) : num(ref.num)
	{
		cout<<"AAA(const AAA &ref)"<<endl;
	}
	AAA& operator=(const AAA &ref)
	{
		num = ref.num;
		cout<<"AAA& operator=(const AAA &ref)"<<endl;
		return *this;
	}
};

class BBB
{
private:
	AAA mem;
public:
	BBB(const AAA &ref) : mem(ref)
	{ }
};

class CCC
{
private:
	AAA mem;
public:
	CCC(const AAA &ref)
	{
		mem = ref;
	}
};

int main()
{
	AAA aaa(12);
	BBB bbb(aaa);
	CCC ccc(aaa);

	return 0;
}
