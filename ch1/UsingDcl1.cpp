#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout<<"HybFunc()"<<std::endl;
		std::cout<<"In Hybrid Namespace"<<std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;
	HybFunc();

	return 0;

}

