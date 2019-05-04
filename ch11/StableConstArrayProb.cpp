#include <iostream>
#include <cstdlib>

using std::endl;
using std::cout;

class IntArray
{
private:
	int *arr;
	int arrlen;

	IntArray(const IntArray &ref) {}
	IntArray& operator=(const IntArray &ref) {}
public:
	IntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[](int idx)
	{
		if( (idx<0) | (idx>=arrlen) )
		{
			cout<<"Index bound error"<<endl;
			exit(1);
		}

		return arr[idx];
	}
	int GetArrLen() const 
	{
		return arrlen;
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
	
