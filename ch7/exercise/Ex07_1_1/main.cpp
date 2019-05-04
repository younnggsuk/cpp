#include <iostream>

using std::cout;
using std::endl;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int g) : gasolineGauge(g) {}
	int GetGasGauge() const
	{
		return gasolineGauge;
	}
};
	
class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int g, int e) : Car(g), electricGauge(e) {}
	int GetElecGauge() const
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int g, int e, int w)	: HybridCar(g, e), waterGauge(w) {}
	void ShowCurrentGauge() const
	{
		cout<<"Gasoline : "<<GetGasGauge()<<endl;
		cout<<"Electricity : "<<GetElecGauge()<<endl;
		cout<<"Water : "<<waterGauge<<endl<<endl;
	}
};

int main(void)
{
	
	HybridWaterCar car(100, 200, 300);
	car.ShowCurrentGauge();

	return 0;
}

