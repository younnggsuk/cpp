#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a>b ? a : b;
}
template<>
char* Max(char *a, char *b)
{
	cout<<"Max<char*>"<<endl;
	return strlen(a) > strlen(b) ? a : b;
}
template<>
const char* Max(const char *a, const char *b)
{
	cout<<"Max<const char*>"<<endl;
	return strlen(a) > strlen(b) ? a : b;
}

int main(void)
{
	cout<<Max("Simple", "Best")<<endl;
	char str1[] = "Simple";
	char str2[] = "Best";
	cout<<Max(str1, str2)<<endl;

	return 0;
}
