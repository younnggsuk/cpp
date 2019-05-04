#include <iostream>
#include <cstdlib>

using std::endl;
using std::cout;

class IntArray
{
private:
	int *arr;
	int arrlen;
public:
	IntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	~IntArray()
	{
		delete []arr;
	}
	int GetArrLen() const
	{
		return arrlen;
	}
	int operator[](int idx) const
	{
		if( (idx<0) || (idx>=arrlen) )
		{
			cout<<"Array index out of boun exception"<<endl;
			exit(1);
		}

		return arr[idx];
	}
	int& operator[](int idx)
	{
		if( (idx<0) || (idx>=arrlen) )
		{
			cout<<"Array index out of boun exception"<<endl;
			exit(1);
		}

		return arr[idx];
	}
};

void ShowAllData(const IntArray &ref)
{
	int len = ref.GetArrLen();

	for(int i=0; i<len; i++)
		cout<<ref[i]<<endl;
}

int main()
{
	IntArray arr(5);

	for(int i=0; i<5; i++)
		arr[i] = (i+1)*11;

	ShowAllData(arr);

	return 0;
}
	
