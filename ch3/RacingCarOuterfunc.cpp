#include <iostream>

using std::endl;
using std::cout;
using std::cin;

namespace CAR_CONST
{
	enum {
		NAME_LEN = 20,
		MAX_SPEED = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gamerID[CAR_CONST::NAME_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();
	void Break();
	void Accel();
}

int main(void)
{
	Car car1 = {"CAR1", 100, 0};
	Car car2 = {"CAR2", 100, 0};

	car1.Accel();
	car1.Accel();
	car1.ShowCarState();
	car1.Break();
	car1.ShowCarState();

	car2.Accel();
	car2.Break();
	car2.ShowCarState();

	return 0;
}

inline void ShowCarState()
{
	cout<<"ID    : "<<gamerID<<endl;
	cout<<"Fuel  : "<<fuelGauge<<"%"<<endl;
	cout<<"Speed : "<<curSpeed<<"km/h"<<endl<<endl;
}

inline void Break()
{
	if(curSpeed <= 0)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

inline void Accel()
{
	if(fuelGauge <= 0)
	{
		fuelGauge = 0;
		return;
	}
	else
	{
		fuelGauge -= CAR_CONST::FUEL_STEP;
	}

	if((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPEED)
	{
		curSpeed = CAR_CONST::MAX_SPEED;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

