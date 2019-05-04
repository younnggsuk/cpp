#include "Ring.h"

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void Ring::Init(int xIn, int yIn, int rIn, int xOut, int yOut, int rOut)
{		
	inner.Init(xIn, yIn, rIn);
	outer.Init(xOut, yOut, rOut);
}	
void Ring::ShowRingInfo() const
{
	cout<<"Inner Circle Info..."<<endl;
	inner.ShowCircleInfo();
	cout<<"Outer Circle Info..."<<endl;
	outer.ShowCircleInfo();
}
