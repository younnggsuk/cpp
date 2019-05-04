#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Point.h"

class Rectangle
{
	private:
		Point leftTop;
		Point rightBottom;
	public:
		Rectangle(int x1, int y1, int x2, int y2);
		void ShowRecInfo() const; 
};

#endif
