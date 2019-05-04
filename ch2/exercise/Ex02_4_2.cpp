#include <iostream>
#include <ctime>
#include <cstdlib>

using std::endl;
using std::cout;
using std::cin;

int main(void)
{
	srand(time(NULL));

	for(int i=0; i<5; i++)
	{
		cout<<rand()%100<<' ';
	}
	cout<<endl;

	return 0;
}
