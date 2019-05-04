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

void Car::InitMembers(const char *ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::Accel()
{
	if(fuelGauge <= 0)
	{
		fuelGauge = 0;
		return;
	}
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if((curSpeed+CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if(curSpeed <= CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

void Car::ShowCarState()
{
	cout<<"ID    : "<<gamerID<<endl;
	cout<<"Fuel  : "<<fuelGauge<<"%"<<endl;
	cout<<"Speed : "<<curSpeed<<"km/h"<<endl<<endl;
}

int main(void)
{
	Car car1;
	car1.InitMembers("racer", 100);
	car1.Accel();
	car1.Accel();
	car1.Accel();
	car1.ShowCarState();
	car1.Break();
	car1.ShowCarState();

	return 0;
}
