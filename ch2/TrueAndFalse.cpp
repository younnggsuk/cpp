#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	cout<<"true : "<<true<<endl;
	cout<<"false : "<<false<<endl;

	int i;
	
	while(true)
	{
		cout<<i++<<' ';
		
		if(i > 10)
			break;
	}

	cout<<endl;

	cout<<"sizeof(1) : "<<sizeof(1)<<endl;
	cout<<"sizeof(0) : "<<sizeof(0)<<endl;
	cout<<"sizeof(true) : "<<sizeof(true)<<endl;
	cout<<"sizeof(false) : "<<sizeof(false)<<endl;

	return 0;
}

