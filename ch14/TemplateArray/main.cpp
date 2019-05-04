#include <iostream>
using namespace std;

#include "ArrayTemplate.h"
#include "PointTemplate.h"

int main(void)
{
	BoundCheckArray<Point<int>> arr1(3);
	for(int i=0; i<arr1.GetArrLen(); i++)
		arr1[i] = Point<int>(i, i+1);

	for(int i=0; i<arr1.GetArrLen(); i++)
		arr1[i].ShowPosition();
	
	BoundCheckArray<Point<double>> arr2(3);
	for(int i=0; i<arr2.GetArrLen(); i++)
		arr2[i] = Point<double>(i*1.1, (i+1)*1.1);

	for(int i=0; i<arr2.GetArrLen(); i++)
		arr2[i].ShowPosition();

	typedef Point<int>* POINT_PTR;
	BoundCheckArray<POINT_PTR> parr(3);
	for(int i=0; i<parr.GetArrLen(); i++)
		parr[i] = new Point<int>(i*10, (i+1)*10);
	for(int i=0; i<parr.GetArrLen(); i++) {
		parr[i]->ShowPosition();
		delete parr[i];
	}

	return 0;
}	
