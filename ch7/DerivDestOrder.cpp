#include <iostream>

using std::cout;
using std::endl;

class SoBase
{
private:
	int baseNum;
public:
	SoBase(int n) : baseNum(n) 
	{
		cout<<"SoBase() : "<<baseNum<<endl;
	}
	~SoBase()
	{
		cout<<"~SoBase() : "<<baseNum<<endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;
public:
	SoDerived(int n) : SoBase(n), derivNum(n)
	{
		cout<<"SoDerived() : "<<derivNum<<endl;
	}
	~SoDerived()
	{
		cout<<"~SoDerived() : "<<derivNum<<endl;
	}
};

int main()
{
	SoDerived dr1(10);
	SoDerived dr2(20);

	return 0;
}
