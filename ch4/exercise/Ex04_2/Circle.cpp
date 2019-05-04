#include "Circle.h"

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void Circle::Init(int x, int y, int r)
{
	center.Init(x, y);
	radius = r;
}
void Circle::ShowCircleInfo() const
{
	cout<<"radius : "<<radius<<endl;
	center.ShowPointInfo();
}

