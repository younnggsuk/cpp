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

	void ShowCarState()
	{
		cout<<"ID    : "<<gamerID<<endl;
		cout<<"Fuel  : "<<fuelGauge<<"%"<<endl;
		cout<<"Speed : "<<curSpeed<<"km/h"<<endl<<endl;
	}

	void Accel()
	{
		if(fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if((curSpeed + ACC_STEP) >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}

	void Break()
	{
		if(curSpeed <= 0) 
		{
			curSpeed = 0;
			return;
		}
		
		curSpeed -= BRK_STEP;
	}
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

