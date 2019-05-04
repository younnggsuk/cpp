#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x=0, T y=0) : xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
	}
};

template <typename T>
class DataWrapper
{
private:
	T mdata;
public:
	DataWrapper(T data) : mdata(data) {}
	void ShowData() const
	{
		cout<<"Data : "<<mdata<<endl;
	}
};

template <>
class DataWrapper<char*>
{
private:
	char *mdata;
public:
	DataWrapper(const char *data)
	{
		mdata = new char[strlen(data)+1];
		strcpy(mdata, data);
	}
	~DataWrapper()
	{
		delete []mdata;
	}
	void ShowData() const
	{
		cout<<"String : "<<mdata<<endl;
		cout<<"Length : "<<strlen(mdata)<<endl;
	}
};

template <>
class DataWrapper<Point<int>>
{
private:
	Point<int> mdata;
public:
	DataWrapper(int x, int y) : mdata(x, y) {}
	void ShowData() const
	{
		mdata.ShowPosition();
	}
};

int main()
{
	DataWrapper<int> d1(170);
	d1.ShowData();
	
	DataWrapper<char*> d2("Hello world!!");
	d2.ShowData();

	DataWrapper<Point<int>> d3(1, 2);
	d3.ShowData();
	return 0;
}
