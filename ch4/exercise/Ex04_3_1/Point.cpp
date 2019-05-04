#include "Point.h"

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void Point::ShowPointInfo() const
{
	cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
}
