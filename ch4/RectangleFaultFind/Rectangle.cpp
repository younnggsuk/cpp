#include "Rectangle.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool Rectangle::InitMembers(const Point &lt, const Point &rb)
{
	if(lt.GetX() > rb.GetX() || lt.GetY() < rb.GetY())
	{
		cout<<"Init Rec error"<<endl;
		return false;
	}

	leftTop.InitMembers(lt.GetX(), lt.GetY());
	rightBottom.InitMembers(rb.GetX(), rb.GetY());
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout<<"Left Top : "<<leftTop.GetX()<<", "<<leftTop.GetY()<<endl;
	cout<<"Right Bottom : "<<rightBottom.GetX()<<", "<<rightBottom.GetY()<<endl;
}
