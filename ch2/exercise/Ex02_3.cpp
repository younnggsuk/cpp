#include <iostream>

using std::endl;
using std::cout;
using std::cin;

typedef struct _Point
{
	int x;
	int y;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *p = new Point;
	p->x = p1.x+p2.x;
	p->y = p1.y+p2.y;

	return *p;
}

int main(void)
{
	Point *p1 = new Point;
	Point *p2 = new Point;

	p1->x = 10;
	p1->y = 10;
	p2->x = 11;
	p2->y = 12;

	Point &res = PntAdder(*p1, *p2);
	
	cout<<"res.x : "<<res.x<<endl;
	cout<<"res.y : "<<res.y<<endl;

	delete p1;
	delete p2;
	delete &res;

	return 0;
}
