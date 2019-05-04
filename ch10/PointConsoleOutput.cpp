#include <iostream>

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		std::cout<<'['<<xpos<<", "<<ypos<<']'<<std::endl;
	}
	
	friend std::ostream& operator<<(std::ostream& ostm, const Point &ref);
};

std::ostream& operator<<(std::ostream& ostm, const Point &ref)
{
	ref.ShowPosition();
	return ostm;
}

int main()
{
	Point pos(1, 3);
	std::cout<<pos;
	Point pos2(101, 303);
	std::cout<<pos2;

	return 0;
}
