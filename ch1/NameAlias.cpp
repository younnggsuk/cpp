#include <iostream>

using std::cout; using std::cin; using std::endl;

namespace A
{
	namespace B
	{
		namespace C
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	A::B::C::num1 = 10;
	A::B::C::num2 = 20;

	namespace ABC = A::B::C;

	cout<<ABC::num1<<endl;
	cout<<ABC::num2<<endl;

	return 0;

}
