#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Person
{
private:
	char *name;
	int age;
public:
	Person(char *_name, int _age) : age(_age)
	{
		name = new char[strlen(_name)+1];
		strcpy(name, _name);
	}
	Person() : age(0)
	{
		name = NULL;
	}
	void SetPersonInfo(char *_name, int _age)
	{
		name = _name;
		age = _age;
	}
	void ShowPersonInfo()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age  : "<<age<<endl;
	}
	~Person()
	{
		delete []name;
		cout<<"Called ~Person()"<<endl;
	}
};

int main(void)
{
	Person *pArr[3];
	char buf[100];
	int age;

	for(int i=0; i<3; i++)
	{
		cout<<"Input name : ";
		cin>>buf;
		cout<<"Input age  : ";
		cin>>age;
		pArr[i] = new Person(buf, age);
	}

	for(int i=0; i<3; i++)
	{
		pArr[i]->ShowPersonInfo();
	}	

	for(int i=0; i<3; i++)
	{
		delete pArr[i];
	}

	return 0;
}
