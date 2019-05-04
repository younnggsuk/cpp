#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Person
{
private:
	char *name;
public:
	Person(const char *_name)
	{
		name = new char[strlen(_name)+1];
		strcpy(name, _name);
	}
	~Person()
	{
		delete []name;
	}
	void WhatYourName() const
	{
		cout<<"Name : "<<name<<endl;
	}
};

class UnivStudent : public Person
{
private:
	char *major;
public:
	UnivStudent(const char *_name, const char *_major)
		: Person(_name)
	{
		major = new char[strlen(_major)+1];
		strcpy(major, _major);
	}
	~UnivStudent()
	{
		delete []major;
	}
	void WhoAreYou() const
	{
		WhatYourName();
		cout<<"Major : "<<major<<endl<<endl;
	}
};

int main()
{
	UnivStudent st1("Kim", "Computer Science");
	st1.WhoAreYou();

	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();

	return 0;
}
