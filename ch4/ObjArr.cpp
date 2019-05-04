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
	Person(char *str, int num) : age(num)
	{
		name = new char[strlen(str)+1];
		strcpy(name, str);
	}
	Person() : age(0)
	{
		name = NULL;
		cout<<"Called Person()"<<endl;
	}
	~Person()
	{	
		delete []name;
		cout<<"Called ~Person()"<<endl;
	}
	void SetPersonInfo(char *myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age  : "<<age<<endl;
	}
};

int main(void)
{
	Person pArr[3];
	char buf[100];
	char *pStr;
	int age;

	for(int i=0; i<3; i++)
	{
		cout<<"Input name : ";
		cin>>buf;
		cout<<"Input Age  : ";
		cin>>age;
		pStr = new char[strlen(buf)+1];
		strcpy(pStr, buf);
		pArr[i].SetPersonInfo(pStr, age);
	}

	for(int i=0; i<3; i++)
	{
		pArr[i].ShowPersonInfo();
	}
		
	return 0;
}
