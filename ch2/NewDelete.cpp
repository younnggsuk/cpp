#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

char* MakeStrAdr(int len)
{
	char *str = new char[len];
	return str;
}

int main(void)
{
	char *str = MakeStrAdr(20);
	strcpy(str, "NewDelete ex");
	cout<<str<<endl;

	delete []str;
	return 0;
}
