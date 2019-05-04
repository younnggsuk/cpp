#include <iostream>
#include <cstring>
#include <cstdlib>

using std::endl;
using std::cout;
using std::cin;

char* MakeStrAdr(int len)
{
	char *str = (char*)malloc(sizeof(char)*len);
	return str;
}

int main(void)
{
	char *str = MakeStrAdr(20);
	strcpy(str, "Hello world");

	cout<<str<<endl;
	
	free(str);
	return 0;
}
