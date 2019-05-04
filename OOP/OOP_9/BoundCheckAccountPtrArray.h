#ifndef __BOUND_CHECK_ACCOUNT_PTR_ARRAY_H__
#define __BOUND_CHECK_ACCOUNT_PTR_ARRAY_H__

#include "AccountClass.h"

typedef Account* ACCOUNT_PTR;

class BoundCheckAccountPtrArray
{
private:
	ACCOUNT_PTR *arr;
	int arrlen;

	BoundCheckAccountPtrArray(const BoundCheckAccountPtrArray& copy) {}
	BoundCheckAccountPtrArray& operator=(const BoundCheckAccountPtrArray& ref) {}
public:
	BoundCheckAccountPtrArray(int len);
	~BoundCheckAccountPtrArray();
	ACCOUNT_PTR& operator[](int idx);
	ACCOUNT_PTR operator[](int idx) const;
	int GetArrLen() const;
};

#endif
