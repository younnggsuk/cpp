#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Point.h"

class Rectangle
{
	private:
		Point leftTop;
		Point rightBottom;
	public:
		bool InitMembers(const Point &lt, const Point &rb);
		void ShowRecInfo() const; 
};

#endif
