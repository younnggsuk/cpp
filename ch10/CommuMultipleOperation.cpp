#include <iostream>
using std::endl;
using std::cout;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
	}
	friend Point operator*(int times, const Point &ref);
	friend Point operator*(const Point &ref, int times);
};

Point operator*(int times, const Point &ref)
{
	Point res(ref.xpos*times, ref.ypos*times);
	return res;
}
Point operator*(const Point &ref, int times)
{
	Point res(ref.xpos*times, ref.ypos*times);
	return res;
}

int main()
{
	Point pos(1, 2);
	Point cpy;

	cpy=pos*3;
	cpy.ShowPosition();

	cpy=3*pos;
	cpy.ShowPosition();
	
	cpy=2*pos*3;
	cpy.ShowPosition();
	return 0;
}
