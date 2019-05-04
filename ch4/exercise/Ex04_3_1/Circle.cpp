#include "Circle.h"

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void Circle::ShowCircleInfo() const
{
	cout<<"radius : "<<radius<<endl;
	center.ShowPointInfo();
}

