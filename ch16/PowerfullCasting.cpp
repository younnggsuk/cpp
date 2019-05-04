#include <iostream>
using namespace std;

class Car
{
private:
	int fuel;
public:
	Car(int _fuel) : fuel(_fuel) {}
	void ShowCarState() const
	{
		cout<<"Fuel : "<<fuel<<endl;
	}
	virtual ~Car()
	{
		cout<<"~Car()"<<endl;
	}
};

class Truck : public Car
{
private:
	int weight;
public:
	Truck(int _fuel, int _weight) : Car(_fuel), weight(_weight) {}
	void ShowTruckState() const
	{
		ShowCarState();
		cout<<"Weight : "<<weight<<endl;
	}
	~Truck()
	{
		cout<<"~Truck()"<<endl;
	}
};

int main()
{
	Car *car1 = new Car(100);
	Truck *truck1 = (Truck*)car1;
	truck1->ShowTruckState();

	Car *car2 = new Truck(300, 200);
	Truck *truck2 = (Truck*)car2;
	truck2->ShowTruckState();

	delete car1; delete car2;

	return 0;
}
