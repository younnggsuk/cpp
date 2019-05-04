#include "Class.h"

void Printer::SetString(const char *str)
{
	strcpy(string, str);
}

void Printer::ShowString()
{
	cout<<string<<endl;
}

