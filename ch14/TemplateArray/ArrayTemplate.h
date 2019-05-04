#ifndef __ARRAY_TEMPLATE_H__
#define __ARRAY_TEMPLATE_H__

#include <iostream>
using namespace std;

template <typename T>
class BoundCheckArray
{
private:
	T *arr;
	const int MAX_LEN;
	BoundCheckArray(const BoundCheckArray &copy) {}
	BoundCheckArray& operator=(const BoundCheckArray &ref) {}
public:
	BoundCheckArray(int len);
	~BoundCheckArray();
	T operator[](int idx) const;
	T& operator[](int idx);
	int GetArrLen() const;
};

template <typename T>
BoundCheckArray<T>::BoundCheckArray(int len) : MAX_LEN(len)
{
	arr = new T[MAX_LEN];
}
template <typename T>
BoundCheckArray<T>::~BoundCheckArray()
{
	delete []arr;
}
template <typename T>
T BoundCheckArray<T>::operator[](int idx) const
{
	if( (idx<0) || (MAX_LEN<=idx) )
	{
		cout<<"bound error"<<endl;
		exit(1);
	}
	return arr[idx];
}
template <typename T>
T& BoundCheckArray<T>::operator[](int idx)
{
	if( (idx<0) || (MAX_LEN<=idx) )
	{
		cout<<"bound error"<<endl;
		exit(1);
	}
	return arr[idx];
}
template <typename T>
int BoundCheckArray<T>::GetArrLen() const
{
	return MAX_LEN;
}

#endif
