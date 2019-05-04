#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Simple
{
public:
	static int cnt;
public:
	Simple() {cnt++;}
};
int Simple::cnt = 0;

int main()
{
	cout<<Simple::cnt<<" Simple obj"<<endl;

	Simple sim1;
	Simple sim2;
	
	cout<<Simple::cnt<<" Simple obj"<<endl;
	cout<<sim1.cnt<<" Simple obj"<<endl;
	cout<<sim2.cnt<<" Simple obj"<<endl;

	return 0;
}
