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
	friend std::istream& operator>>(std::istream& istm, Point &ref);
};

std::ostream& operator<<(std::ostream& ostm, const Point &ref)
{
	std::cout<<'['<<ref.xpos<<", "<<ref.ypos<<']'<<std::endl;
	return ostm;
}

std::istream& operator>>(std::istream& istm, Point &ref)
{
	std::cin>>ref.xpos>>ref.ypos;
	return istm;
}


int main()
{
	Point pos1;
	std::cout<<"input coordinate in order of x, y : ";
	std::cin>>pos1;
	std::cout<<pos1;

	Point pos2;
	std::cout<<"input coordinate in order of x, y : ";
	std::cin>>pos2;
	std::cout<<pos2;

	return 0;
}
