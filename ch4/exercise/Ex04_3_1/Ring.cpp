#include "Ring.h"

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void Ring::ShowRingInfo() const
{
	cout<<"Inner Circle Info..."<<endl;
	inner.ShowCircleInfo();
	cout<<"Outer Circle Info..."<<endl;
	outer.ShowCircleInfo();
}
