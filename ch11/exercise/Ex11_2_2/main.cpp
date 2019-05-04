#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class BoundCheckIntArray
{
private:
	int *arr;
	int arrlen;
	BoundCheckIntArray(const BoundCheckIntArray &ref) {}
	BoundCheckIntArray& operator=(const BoundCheckIntArray &ref) {}
public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	~BoundCheckIntArray()
	{
		delete []arr;
	}
	int GetLen() const
	{
		return arrlen;
	}
	int operator[](int idx) const
	{
		if( (idx<0) || (idx>=arrlen) )
		{
			cout<<"Bound check error"<<endl;
			exit(1);
		}
		return arr[idx];
	}
	int& operator[](int idx)
	{
		if( (idx<0) || (idx>=arrlen) )
		{
			cout<<"Bound check error"<<endl;
			exit(1);
		}
		return arr[idx];
	}	
};

typedef BoundCheckIntArray* ARR_PTR;

class BoundCheck2DIntArray
{
private:
	BoundCheckIntArray **arr;
	int len;
	BoundCheck2DIntArray(const BoundCheck2DIntArray &ref) {}
	BoundCheck2DIntArray& operator=(const BoundCheck2DIntArray &ref) {}

public:
	BoundCheck2DIntArray(int r, int c) : len(r)
	{
		arr = new ARR_PTR[r];
		for(int i=0; i<r; i++) {
			arr[i] = new BoundCheckIntArray(c);
		}
	}
	~BoundCheck2DIntArray()
	{
		for(int i=0; i<len; i++)
			delete []arr[i];
		
		delete []arr;
	}
	int GetLen() const
	{
		return len;
	}
	BoundCheckIntArray& operator[](int idx)
	{
		if( ( (idx<0) || (idx>=len) ) )
		{
			cout<<"Bound check error"<<endl;
			exit(1);
		}
		return *(arr[idx]); 
	}
};

int main()
{
	BoundCheck2DIntArray arr2d(3, 4);

	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			arr2d[i][j] = (i+j);
		}
	}

	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cout<<arr2d[i][j];
		}
		cout<<endl;
	}


	return 0;
}	
