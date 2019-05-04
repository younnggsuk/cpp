#include "Class.h"

void Calculator::Init()
{
	addCount = 0;
	minCount = 0;
	mulCount = 0;
	divCount = 0;
}

double Calculator::Add(double num1, double num2)
{
	addCount++;
	return (num1+num2);
}

double Calculator::Min(double num1, double num2)
{
	minCount++;
	return (num1-num2);
}

double Calculator::Mul(double num1, double num2)
{
	mulCount++;
	return (num1*num2);
}

double Calculator::Div(double num1, double num2)
{
	divCount++;
	return (num1/num2);
}
void Calculator::ShowOpCount()
{
	cout<<"Add : "<<addCount<<endl;
	cout<<"Min : "<<minCount<<endl;
	cout<<"Mul : "<<mulCount<<endl;
	cout<<"Div : "<<divCount<<endl;
}

