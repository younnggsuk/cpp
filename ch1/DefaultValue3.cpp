#include <iostream>

int BoxVolume(int l, int w=1, int h=1);

int main(void)
{
	std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl;
	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
//	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;

	return 0;
}

int BoxVolume(int l, int w, int h)
{
	return l*w*h;
}
