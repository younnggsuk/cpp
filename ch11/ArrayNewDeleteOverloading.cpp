#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream &os, const Point &ref);
	void* operator new(size_t size)
	{
		cout<<"operator new : "<<size<<endl;
		void *addr = new char[size];
		return addr;
	}
	void* operator new[](size_t size)
	{
		cout<<"operator new[] : "<<size<<endl;
		void *addr = new char[size];
		return addr;
	}
	void operator delete(void* addr)
	{
		cout<<"operator delete"<<endl;
		delete ((char*)addr);
	}
	void operator delete[](void* addr)
	{
		cout<<"operator delete[]"<<endl;
		delete []((char*)addr);
	}	
};

ostream& operator<<(ostream &os, const Point &ref)
{
	cout<<'['<<ref.xpos<<", "<<ref.ypos<<']'<<endl;
	return os;
}	
 
int main()
{
	Point *ref = new Point(3, 4);
	Point *ref2 = new Point[3];
	
	delete ref;
	delete []ref2;

	return 0;
}
