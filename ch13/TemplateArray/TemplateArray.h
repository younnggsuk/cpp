#ifndef __TEMPLATE_ARRAY_H__
#define __TEMPLATE_ARRAY_H__

#include <iostream>
using namespace std;

template <typename T>
class BoundCheckArray
{
private:
	T *arr;
	const int MAX_LEN;
	BoundCheckArray(const BoundCheckArray& copy) {}
	BoundCheckArray& operator=(const BoundCheckArray& ref) {}
public:
	BoundCheckArray(int len);
	~BoundCheckArray();
	int GetArrLen() const;
	T& operator[](int idx);
	T operator[](int idx) const;
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
int BoundCheckArray<T>::GetArrLen() const
{
	return MAX_LEN;
}

template <typename T>
T& BoundCheckArray<T>::operator[](int idx)
{
	if( (idx<0) || (idx>=MAX_LEN) )
	{
		cout<<"Array Bound Error"<<endl;
		exit(1);
	}
	return arr[idx];
}

template <typename T>
T BoundCheckArray<T>::operator[](int idx) const
{
	if( (idx<0) || (idx>=MAX_LEN) )
	{
		cout<<"Array Bound Error"<<endl;
		exit(1);
	}
	return arr[idx];
}

#endif
