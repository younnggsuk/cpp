#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

class BoundCheckIntArray
{
private:
	int *arr;
	int arrlen;
	BoundCheckIntArray(const BoundCheckIntArray& ref)
	{ }
	BoundCheckIntArray& operator=(const BoundCheckIntArray& ref)
	{ }
public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[arrlen];
	}
	int& operator[](int idx)
	{
		if( (idx<0) || (idx>=arrlen) )
		{
			cout<<"Array index out of bound exception"<<endl;
			exit(1);
		}

		return arr[idx];
	}
	~BoundCheckIntArray()
	{
		delete []arr;
	}
};

int main()
{
	BoundCheckIntArray arr(5);

	for(int i=0; i<5; i++)
		arr[i] = (i+1)*11;

	for(int i=0; i<6; i++)
		cout<<arr[i]<<endl;

//	BoundCheckIntArray copy(arr);
//	BoundCheckIntArray copy2 = arr;

	return 0;
}
