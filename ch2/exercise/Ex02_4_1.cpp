#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	char buf[100];
	strcpy(buf, "hello world");
	strcat(buf, "\n\0");
	
	if(strcmp(buf, "hello world\n") == 0)
		cout<<"buf : "<<buf;
	
	cout<<"strlen : "<<strlen(buf)<<endl;;

	return 0;
}
