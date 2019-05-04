#include "Point.h"
#include "Rectangle.h"

#include "iostream"

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	Point pos1;
	if(!pos1.InitMembers(-2, 9))
		cout<<"Init Pos Fail"<<endl;
	if(!pos1.InitMembers(2, 9))
		cout<<"Init Pos Fail"<<endl;

	Point pos2;
	if(!pos2.InitMembers(5, 4))
		cout<<"Init Pos Fail"<<endl;

	Rectangle rec;
	if(!rec.InitMembers(pos2, pos1))
		cout<<"Init Rec Fail"<<endl;

	if(!rec.InitMembers(pos1, pos2))
		cout<<"Init Rec Fail"<<endl;

	rec.ShowRecInfo();
	return 0;
}
