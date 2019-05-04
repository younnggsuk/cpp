#include <iostream>
using namespace std;

template <typename T, int len>
class Simple
{
private:
	T arr[len];
public:
	T& operator[](int idx)
	{
		return arr[idx];
	}
	Simple<T, len>& operator=(const Simple<T, len> &ref)
	{
		for(int i=0; i<len; i++)
			arr[i] = ref.arr[i];
	}
};

int main()
{
	Simple<int, 3> a1;
	for(int i=0; i<3; i++)
		a1[i] = i*10;
	Simple<int, 3> a2 = a1;
	for(int i=0; i<3; i++)
		cout<<a2[i]<<", ";
	cout<<endl;
	
	Simple<int, 5> a3;
	for(int i=0; i<5; i++)
		a3[i] = i*10;
	Simple<int, 5> a4 = a3;
	for(int i=0; i<5; i++)
		cout<<a4[i]<<", ";
	cout<<endl;

	return 0;
}
