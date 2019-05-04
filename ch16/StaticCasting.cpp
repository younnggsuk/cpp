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
	Car *c1 = new Truck(100, 200);
	Truck *t1 = static_cast<Truck*>(c1);
	t1->ShowTruckState();

	Car *c2 = new Car(300);
	Truck *t2 = static_cast<Truck*>(c2);
	t2->ShowTruckState();

	delete c1;
	delete c2;

	return 0;
}
