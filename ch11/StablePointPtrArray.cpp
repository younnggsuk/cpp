#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::ostream;

class Point
{
private:
	int xpos;
	int ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream &os, Point pos);
};

ostream& operator<<(ostream &os, Point pos)
{
	cout<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
	return os;
}

typedef Point* POINT_PTR;

class BoundCheckArray
{
private:
	POINT_PTR *arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray &ref) {}
	BoundCheckArray operator=(const BoundCheckArray &ref) {}

public:
	BoundCheckArray(int len) : arrlen(len)
	{
		arr = new POINT_PTR[len];
	}
	~BoundCheckArray()
	{
		delete []arr;
	}
	int GetArrLen() const
	{
		return arrlen;
	}
	POINT_PTR& operator[](int idx)
	{
		if( (idx<0) || (idx>=arrlen) )
		{
			cout<<"Array index error"<<endl;
			exit(1);
		}
		return arr[idx];
	}
	POINT_PTR operator[](int idx) const
	{
		if( (idx<0) || (idx>=arrlen) )
		{
			cout<<"Array index error"<<endl;
			exit(1);
		}
		return arr[idx];
	}
};

int main()
{
	BoundCheckArray arr(3);

	arr[0] = new Point(1, 2);
	arr[1] = new Point(3, 4);
	arr[2] = new Point(5, 6);

	for(int i=0; i<arr.GetArrLen(); i++)
		cout<<*(arr[i]);

	delete arr[0];
	delete arr[1];
	delete arr[2];

	return 0;
}
