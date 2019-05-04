#ifndef __CLASS_H__
#define __CLASS_H__

#include <iostream>
#include <cstring>

using std::endl;
using std::cout;
using std::cin;

class Printer
{
	private:
		char string[100];
	public:
		void SetString(const char *str);
		void ShowString();
};

#endif
