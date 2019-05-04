#include "StringClass.h"

#include <iostream>
#include <cstring>

using namespace std;

String::String() : len(0) { str = NULL; }
String::~String()
{	
	if(str != NULL)
		delete []str;
}
String::String(const char *s)
{
	len = strlen(s)+1;
	str = new char[len];
	strcpy(str, s);
}
String::String(const String &copy) : len(copy.len)
{
	str = new char[len];
	strcpy(str, copy.str);
}
String& String::operator=(const String &ref)
{
	if(str != NULL)
		delete []str;
	len = ref.len;
	str = new char[len];
	strcpy(str, ref.str);
	return *this;
}
String& String::operator+=(const String &ref)
{
	len += ref.len-1;
	char *temp = new char[len];
	strcpy(temp, str);
	strcat(temp, ref.str);

	if(str != NULL)
		delete []str;
	str = temp;
	return *this;
}
String String::operator+(const String &ref)
{
	char *temp = new char[len+ref.len-1];
	strcpy(temp, str);
	strcat(temp, ref.str);

	String tempstr(temp);
	delete []temp;
	return tempstr;
}
bool String::operator==(const String &ref)
{
	return strcmp(str, ref.str) ? false : true;
}

ostream& operator<<(ostream& os, const String &ref)
{
	os<<ref.str;
	return os;
}

istream& operator>>(istream& is, String &ref)
{
	char buf[BUFSIZ];
	is>>buf;
	ref = String(buf);
	return is;
}
