#include <iostream>

using std::cout;
using std::endl;

class Rectangle
{
private:
	int width;
	int height;
public:
	Rectangle(int w, int h) : width(w), height(h) {}
	void ShowAreaInfo() const
	{
		cout<<"Area : "<<width*height<<endl;
	}
};

class Square : public Rectangle
{
public:
	Square(int l) : Rectangle(l, l) {}
};

int main()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	
	return 0;
}
