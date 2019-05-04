#ifndef __POINT_H__
#define __POINT_H__

class Point
{
	private:
		int xpos, ypos;
	public:
		Point(int x, int y) : xpos(x), ypos(y) {};
		void ShowPointInfo() const;
};

#endif
