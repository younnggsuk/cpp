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

class BoundCheckArray
{
private:
	Point *arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray& ref) {};
	BoundCheckArray& operator=(const BoundCheckArray& ref) {};
public:
	BoundCheckArray(int len) : arrlen(len) { arr = new Point[len]; }
	~BoundCheckArray() { delete []arr; }
	int GetArrLen() const { return arrlen; }
	Point& operator[](int idx)
	{
		if( (idx<0) || (idx>=arrlen) )
		{
			cout<<"Array index error"<<endl;
			exit(1);
		}
		return arr[idx];
	}
	Point operator[](int idx) const
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
	arr[0] = Point(3, 4);
	arr[1] = Point(4, 4);
	arr[2] = Point(5, 4);

	for(int i=0; i<arr.GetArrLen(); i++)
		cout<<arr[i];

	return 0;
}
