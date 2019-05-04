#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{
		cout<<"Create Point Obj"<<endl;
	}
	~Point()
	{
		cout<<"Delete Point Obj"<<endl;
	}
	void SetPos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	friend ostream& operator<<(ostream& os, const Point &ref);
};

ostream& operator<<(ostream& os, const Point &ref)
{
	os<<'['<<ref.xpos<<", "<<ref.ypos<<']'<<endl;
	return os;
}

class SmartPointer
{
private:
	Point *posptr;
public:
	SmartPointer(Point *ptr) : posptr(ptr) {}
	~SmartPointer()
	{
		delete posptr;
	}
	Point* operator->() const
	{
		return posptr;
	}
	Point& operator*() const
	{
		return *posptr;
	}
};

int main()
{
	SmartPointer sp1(new Point(1, 2));
	SmartPointer sp2(new Point(3, 4));
	SmartPointer sp3(new Point(5, 6));

	cout<<*sp1;
	cout<<*sp2;
	cout<<*sp3;

	sp1->SetPos(10, 20);
	sp2->SetPos(30, 40);
	sp3->SetPos(50, 60);

	cout<<*sp1;
	cout<<*sp2;
	cout<<*sp3;

	return 0;
}
