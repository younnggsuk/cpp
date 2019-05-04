#include <iostream>
using namespace std;

#include "Point.h"

Point::Point(int x, int y) : xpos(x), ypos(y) 
{}
void Point::SetPos(int x, int y)
{
	xpos = x;
	ypos = y;
}
void Point::ShowPosition() const
{
	cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
}
