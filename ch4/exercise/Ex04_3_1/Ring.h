#ifndef __RING_H__
#define __RING_H__

#include "Circle.h"

class Ring
{
	private:
		Circle inner;
		Circle outer;
	public:
		Ring(int xIn, int yIn, int rIn, int xOut, int yOut, int rOut)
			: inner(xIn, yIn, rIn), outer(xOut, yOut, rOut) {}
		void ShowRingInfo() const;
};

#endif
