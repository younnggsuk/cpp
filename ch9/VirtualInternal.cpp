#include <iostream>

using std::cout;
using std::endl;

class AAA
{
private:
	int num;
public:
	virtual void Func1() {cout<<"Func1"<<endl;}
	virtual void Func2() {cout<<"Func2"<<endl;}
};

class BBB : public AAA
{
private:
	int num;
public:
	virtual void Func1() {cout<<"BBB::Func1()"<<endl;}
	void Func3() {cout<<"Func3"<<endl;}
};

int main()
{
	AAA *pa = new AAA();
	BBB *pb = new BBB();

	pa->Func1();
	pb->Func1();

	free(pa);
	free(pb);

	return 0;
}
