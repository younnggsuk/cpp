#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class AAA
{
public:
	AAA()
	{
		cout<<"AAA constructor"<<endl;
	}
	void ShowYourName()
	{
		cout<<"I'm Class AAA"<<endl;
	}
};
class BBB
{
private:
	AAA &ref;
	const int &rNum;
public:
	BBB(AAA &r, const int &num) : ref(r), rNum(num) {}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout<<"and"<<endl;
		cout<<"I'm Class BBB and num : "<<rNum<<endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();

	return 0;
}
