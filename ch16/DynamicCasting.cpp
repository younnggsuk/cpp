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
	~Car()
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
	Car *c1 = new Truck(100, 200);
	Truck *t1 = dynamic_cast<Truck*>(c1);

	Car *c2 = new Car(300);
	Truck *t2 = dynamic_cast<Truck*>(c2);

	Truck *t3 = new Truck(400, 500);
	Car *c3 = dynamic_cast<Car*>(t3);

	delete c1;
	delete c2;
	delete c3;

	return 0;
}
