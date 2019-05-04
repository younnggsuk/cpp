#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class TwoNumber
{
private:
	int num1; 
	int num2;
public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	void ShowTwoNumber()
	{
		cout<<num1<<endl;
		cout<<num2<<endl;
	}
};

int main(void)
{
	TwoNumber num(2, 4);
	num.ShowTwoNumber();

	return 0;
}	
