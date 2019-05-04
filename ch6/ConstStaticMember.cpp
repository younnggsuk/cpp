#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Country
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA  = 957290;
	const static int KOREA  = 9922;
};

int main()
{
	cout<<"Russia : "<<Country::RUSSIA<<endl;
	cout<<"Canada : "<<Country::CANADA<<endl;
	cout<<"China  : "<<Country::CHINA<<endl;
	cout<<"Korea  : "<<Country::KOREA<<endl;

	return 0;
}
