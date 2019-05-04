#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Point;

class PointOP
{
private:
	int opCnt;
public:
	PointOP() : opCnt(0) {}
	Point PointAdd(const Point &p1, const Point &p2);
	Point PointSub(const Point &p1, const Point &p2);
	~PointOP()
	{
		cout<<"Operation count : "<<opCnt<<endl;
	}
};

class Point
{
private:
	int x, y;
public:
	Point(int xpos, int ypos) : x(xpos), y(ypos) {}
	friend Point PointOP::PointAdd(const Point &p1, const Point &p2);
	friend Point PointOP::PointSub(const Point &p1, const Point &p2);
	friend void ShowPoint(const Point &pos);
};

Point PointOP::PointAdd(const Point &p1, const Point &p2)
{
	opCnt++;
	return Point(p1.x+p2.x, p1.y+p2.y);
}

Point PointOP::PointSub(const Point &p1, const Point &p2)
{
	opCnt++;
	return Point(p1.x-p2.x, p1.y-p2.y);
}

void ShowPoint(const Point &pos)
{
	cout<<"x : "<<pos.x<<", y : "<<pos.y<<endl;
}

int main()
{
	PointOP op;
	Point p1(1, 2);
	Point p2(2, 4);

	ShowPoint(op.PointAdd(p1, p2));
	ShowPoint(op.PointSub(p2, p1));

	return 0;
}
