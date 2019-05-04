#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout<<"BestComImpl's SimpleFunc()"<<std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout<<"ProgComImpl's SimpleFunc()"<<std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}
