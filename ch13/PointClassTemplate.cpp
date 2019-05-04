#include <iostream>
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

int main()
{
	Point<int> pos1(3, 4);
	Point<double> pos2(2.4, 3.6);
	Point<char> pos3('P', 'F');

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	
	return 0;
}
