#include <iostream>
using namespace std;

#include "PointClassTemplateFuncDef.h"
#include "PointClassTemplateFuncDef.cpp"

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
