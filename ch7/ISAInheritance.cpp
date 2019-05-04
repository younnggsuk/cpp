#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Computer
{
private:
	char owner[50];
public:
	Computer(const char *_owner)
	{
		strcpy(owner, _owner);
	}
	void Calculate() const
	{
		cout<<"Calculate "<<endl;
	}
};

class Laptop : public Computer
{
private:
	int battery;
public:
	Laptop(const char *_owner, int _battery)
		: Computer(_owner), battery(_battery) {}
	int GetBatteryInfo() const
	{
		return battery;
	}
	void UseBattery()
	{
		battery -= 1;
	}
	void ChargeBattery()
	{
		battery += 5;
	}
	void MovingCal()
	{
		if(battery <= 0)
		{
			cout<<"Need to charge"<<endl;
			return;
		}
		cout<<"Moving ";
		Calculate();
		UseBattery();
	}
};

class Tablet : public Laptop
{
private:
	char pen[50];
public:
	Tablet(const char *_owner, int _battery, const char *_pen) 
		: Laptop(_owner, _battery)
	{
		strcpy(pen, _pen);
	}
	void Write(const char *pen)
	{
		if(GetBatteryInfo() <= 0)
		{
			cout<<"Need to charge"<<endl;
			return;
		}
		if(strcmp(this->pen, pen) != 0)
		{
			cout<<"Not Registerd pen"<<endl;
			return;
		}
		cout<<"Process Writed data"<<endl;
		UseBattery();
	}
};

int main()
{
	Laptop lap("Lee", 5);
	Tablet tab("Hyo", 5, "abcd");

	lap.MovingCal();
	tab.Write("abcd");

	return 0;
}
