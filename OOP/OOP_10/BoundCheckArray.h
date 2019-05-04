#ifndef __BOUND_CHECK_ARRAY_H__
#define __BOUND_CHECK_ARRAY_H__

#include <iostream>

using namespace std;

template <typename T>
class BoundCheckArray
{
private:
	T *arr;
	const int arrlen;
	BoundCheckArray(const BoundCheckArray& copy) {}
	BoundCheckArray& operator=(const BoundCheckArray& ref) {}
public:
	BoundCheckArray(int len);
	~BoundCheckArray();
	T& operator[](int idx);
	T operator[](int idx) const;
	int GetArrLen() const;
};

template <typename T>
BoundCheckArray<T>::BoundCheckArray(int len) : arrlen(len)
{
	arr = new T[len];
}

template <typename T>
BoundCheckArray<T>::~BoundCheckArray()
{
	delete []arr;
}

template <typename T>
T& BoundCheckArray<T>::operator[](int idx)
{
	if( (idx<0) || (arrlen<=idx) )
	{
		cout<<"Array index out of bound exception"<<endl;
		exit(1);
	}
	return arr[idx];
}

template <typename T>
T BoundCheckArray<T>::operator[](int idx) const
{
	if( (idx<0) || (arrlen<=idx) )
	{
		cout<<"Array index out of bound exception"<<endl;
		exit(1);
	}
	return arr[idx];
}

template <typename T>
int BoundCheckArray<T>::GetArrLen() const
{
	return arrlen;
}

#endif
