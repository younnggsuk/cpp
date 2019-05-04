#include <iostream>
#include <cstring>

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
	Person& operator=(const Person& ref)
	{
		delete []name;
		name = new char[strlen(ref.name)+1];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}
	~Person()
	{
		delete []name;
		std::cout<<"destructor"<<std::endl;
	}
	void ShowPersonInfo() const
	{
		std::cout<<"name : "<<name<<std::endl;
		std::cout<<"age  : "<<age<<std::endl;
	}
};

int main()
{
	Person p1("Lee youngsuk", 27);
	Person p2("Lee hyorin", 25);

	p2 = p1;
	
	p1.ShowPersonInfo();
	p2.ShowPersonInfo();

	return 0;
}
