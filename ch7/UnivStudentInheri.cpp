#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Person
{
private:
	char name[50];
	int age;
public:
	Person(const char *_name, int _age) : age(_age)
	{
		strcpy(name, _name);
	}
	void WhatYourName() const
	{
		cout<<"Name : "<<name<<endl;
	}
	void HowOldAreYou() const
	{
		cout<<"Age : "<<age<<endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];
public:
	UnivStudent(const char *_name, int _age, const char *_major)
		: Person(_name, _age)
	{
		strcpy(major, _major);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout<<"Major : "<<major<<endl<<endl;
	}
};

int main()
{
	UnivStudent uStd1("Lee", 22, "Computer science");
	uStd1.WhoAreYou();

	UnivStudent uStd2("Yoon", 21, "Mechanical engineering");
	uStd2.WhoAreYou();

	return 0;
}
