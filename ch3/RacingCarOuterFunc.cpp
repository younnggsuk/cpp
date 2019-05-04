#include <iostream>

using std::endl;
using std::cout;
using std::cin;

namespace CAR_CONST
{
	enum 
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		ACC_STEP = 10,
		BRK_STEP = 10,
		FUEL_STEP = 2
	}; 
}

struct Car{
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();
	void Accel();
	void Break();
};

int main(void)
{
	Car car1 = {"car1", 100, 0};
	Car car2 = {"car2", 100, 0};

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

inline void Car::ShowCarState()
{
	cout<<"ID    : "<<gamerID<<endl;
	cout<<"Fuel  : "<<fuelGauge<<"%"<<endl;
	cout<<"Speed : "<<curSpeed<<"km/h"<<endl<<endl;
}

inline void Car::Accel()
{
	if(fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

inline void Car::Break()
{
	if(curSpeed <= 0) 
	{
		curSpeed = 0;
		return;
	}
	
	curSpeed -= CAR_CONST::BRK_STEP;
}

