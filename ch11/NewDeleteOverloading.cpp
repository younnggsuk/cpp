#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{ }
	
	friend ostream& operator<<(ostream &os, const Point &ref);
	static void* operator new(size_t size)
	{
		cout<<"operator new : "<<size<<endl;
		void* addr = new char[size];
		return addr;
	}
	static void operator delete(void* addr)
	{
		cout<<"operator delete()"<<endl;
		delete []((char*)addr);
	}	
};

ostream& operator<<(ostream &os, const Point &ref)
{
	cout<<'['<<ref.xpos<<", "<<ref.ypos<<']';
	return os;
}

int main()
{
	Point *ptr = new Point(3, 4);
	cout<<(*ptr)<<endl;
	delete ptr;
	return 0;
}
