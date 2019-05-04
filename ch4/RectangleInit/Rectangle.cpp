#include "Rectangle.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
			:leftTop(x1, y1), rightBottom(x2, y2) {}

void Rectangle::ShowRecInfo() const
{
	cout<<"Left Top : "<<leftTop.GetX()<<", "<<leftTop.GetY()<<endl;
	cout<<"Right Bottom : "<<rightBottom.GetX()<<", "<<rightBottom.GetY()<<endl;
}
