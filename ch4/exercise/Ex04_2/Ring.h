#ifndef __RING_H__
#define __RING_H__

#include "Circle.h"

class Ring
{
	private:
		Circle inner;
		Circle outer;
	public:
		void Init(int xIn, int yIn, int rIn, int xOut, int yOut, int rOut);
		void ShowRingInfo() const;
};

#endif
