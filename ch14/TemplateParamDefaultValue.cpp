#include <iostream>
using namespace std;

template <typename T=int, int len=7>
class Array
{
private:
	T arr[len];
public:
	T& operator[](int idx)
	{
		return arr[idx];
	}
	Array<T, len>& operator=(const Array<T, len> &ref)
	{
		for(int i=0; i<len; i++)
			arr[i] = ref.arr[i];
	}
};

int main()
{
	Array<> arr;
	for(int i=0; i<7; i++)
		arr[i] = i+1;
	for(int i=0; i<7; i++)
		cout<<arr[i]<<' ';

	cout<<endl;

	return 0;
}
