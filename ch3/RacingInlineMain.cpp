#include "CarInline.h"

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
