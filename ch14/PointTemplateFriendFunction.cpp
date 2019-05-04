#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x=0, T y=0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout<<'['<<xpos<<", "<ypos<<']'<<endl;
	}
	
	friend ostream& operator<<(ostream& os, const Point<int> &p);
	friend Point<int> operator+(const Point<int> &p1, const Point<int> &p2);
};

ostream& operator<<(ostream& os, const Point<int> &p)
{
	os<<'['<<p.xpos<<", "<<p.ypos<<']'<<endl;
	return os;
}

Point<int> operator+(const Point<int> &p1, const Point<int> &p2)
{
	return Point<int>( (p1.xpos+p2.xpos), (p1.ypos+p2.ypos) );
}

int main(void)
{
	Point<int> pos1(2, 4);
	Point<int> pos2(4, 8);
	Point<int> pos3 = pos1+pos2;
	cout<<pos1<<pos2<<pos3;

	return 0;
}
