#include <iostream>

using std::endl;
using std::cout;
using std::cin;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
};

void ShowCarState(const Car &car)
{
	cout<<"ID    : "<<car.gamerID<<endl;
	cout<<"Fuel  : "<<car.fuelGauge<<"%"<<endl;
	cout<<"Speed : "<<car.curSpeed<<"km/h"<<endl<<endl;
}

void Accel(Car &car)
{
	if(car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if((car.curSpeed + ACC_STEP) >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP;
}

void Break(Car &car)
{
	if(car.curSpeed <= 0) 
	{
		car.curSpeed = 0;
		return;
	}
	
	car.curSpeed -= BRK_STEP;
}

int main(void)
{
	Car car1 = {"car1", 100, 0};
	Car car2 = {"car2", 100, 0};

	Accel(car1);
	Accel(car1);
	ShowCarState(car1);
	Break(car1);
	ShowCarState(car1);

	Accel(car2);
	Break(car2);
	ShowCarState(car2);

	return 0;
}

