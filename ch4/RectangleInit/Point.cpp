#include "Point.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Point::Point(int xpos, int ypos)
{
	x = xpos;
	y = ypos;
}

int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}

bool Point::SetX(int xpos)
{
	if(xpos < 0 || xpos > 100)
	{
		cout<<"xpos error"<<endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if(ypos < 0 || ypos > 100)
	{
		cout<<"ypos error"<<endl;
		return false;
	}

	y = ypos;
	return true;
}

