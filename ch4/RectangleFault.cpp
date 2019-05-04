#include <iostream>

using std::endl;
using std::cout;
using std::cin;

class Point
{
	public:
		int x, y;
};

class Rectangle
{
	public:
		Point topLeft;
		Point bottomRight;

	public:
		void ShowRecInfo()
		{
			cout<<"Top Left : "<<'['<<topLeft.x;
			cout<<", "<<topLeft.y<<']'<<endl;
			cout<<"Bottom Right : "<<'['<<bottomRight.x;
			cout<<", "<<bottomRight.y<<']'<<endl;
		}
};

int main(void)
{
	Point pos1 = {-2, 4};
	Point pos2 = {5, 9};

	Rectangle rec = {pos2, pos1};
	rec.ShowRecInfo();

	return 0;
}
