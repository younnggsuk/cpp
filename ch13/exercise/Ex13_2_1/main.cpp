#include <iostream>
using namespace std;

#include "TemplateSmartPointer.h"
#include "Point.h"

int main()
{
	SmartPointer<Point> sptr1(new Point(1, 2));
	SmartPointer<Point> sptr2(new Point(3, 4));
	sptr1->ShowPosition();
	sptr2->ShowPosition();

	sptr1->SetPos(10, 20);
	sptr2->SetPos(30, 40);
	sptr1->ShowPosition();
	sptr2->ShowPosition();

	return 0;
}
