#include "BoundCheckAccountPtrArray.h"

#include <iostream>

using namespace std;

BoundCheckAccountPtrArray::BoundCheckAccountPtrArray(int len) : arrlen(len)
{
	arr = new ACCOUNT_PTR[len];
}
BoundCheckAccountPtrArray::~BoundCheckAccountPtrArray()
{
	delete []arr;
}
ACCOUNT_PTR& BoundCheckAccountPtrArray::operator[](int idx)
{
	if( (idx<0) || (arrlen<=idx) )
	{
		cout<<"Array index out of bound exception"<<endl;
		exit(1);
	}
	return arr[idx];
}
ACCOUNT_PTR BoundCheckAccountPtrArray::operator[](int idx) const
{
	if( (idx<0) || (arrlen<=idx) )
	{
		cout<<"Array index out of bound exception"<<endl;
		exit(1);
	}
	return arr[idx];
}
int BoundCheckAccountPtrArray::GetArrLen() const
{
	return arrlen;
}

