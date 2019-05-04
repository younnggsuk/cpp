#include "Point.h"

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void Point::Init(int x, int y)
{
	xpos = x;
	ypos = y;
}
void Point::ShowPointInfo() const
{
	cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
}
