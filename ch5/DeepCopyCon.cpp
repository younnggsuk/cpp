#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

class Person
{
private:
	char *name;
	int age;
public:
	Person(const char *_name, int _age) : age(_age)
	{
		name = new char[strlen(_name)+1];
		strcpy(name, _name);
	}
	Person(const Person &copy) : age(copy.age)
	{
		name = new char[strlen(copy.name)+1];
		strcpy(name, copy.name);
	}
	void ShowPersonInfo() const
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
	Person man1("Lee dongwoo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
