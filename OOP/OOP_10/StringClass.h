#ifndef __STRING_CLASS_H__
#define __STRING_CLASS_H__

#include <iostream>
using namespace std;

class String
{
private:
	char *str;
	int len;
public:
	String();
	~String();
	String(const char *s);
	String(const String &copy);
	String& operator=(const String &ref);
	String& operator+=(const String &ref);
	String operator+(const String &ref);
	bool operator==(const String &ref);
	friend ostream& operator<<(ostream& os, const String &ref);
	friend istream& operator>>(istream& is, String &ref);
};

#endif
