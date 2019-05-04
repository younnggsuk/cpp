#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Counter()
{
	static int cnt=0;
	cnt++;
	cout<<"count : "<<cnt<<endl;
}

int main()
{
	for(int i=0; i<10; i++)
		Counter();

	return 0;
}
