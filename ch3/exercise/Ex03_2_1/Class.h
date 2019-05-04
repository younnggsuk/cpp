#ifndef __CLASS_H__
#define __CLASS_H__

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

class Calculator
{
	private:
		int addCount;
		int minCount;
		int mulCount;
		int divCount;
	public:
		void Init();
		double Add(double num1, double num2);
		double Min(double num1, double num2);
		double Mul(double num1, double num2);
		double Div(double num1, double num2);
		void ShowOpCount();
};

#endif
