#ifndef __CAR_H__
#define __CAR_H__

#include <iostream>
#include <cstring>

using std::endl;
using std::cout;
using std::cin;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class Car
{
	private:
		char gamerID[CAR_CONST::ID_LEN];
		int fuelGauge;
		int curSpeed;
	public:
		void InitMembers(const char *ID, int fuel);
		void Accel();
		void Break();
		void ShowCarState();
};

#endif
