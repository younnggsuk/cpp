#include <iostream>
#include <cstring>

using std::endl;
using std::cout;
using std::cin;

class Person
{
private:
	char *name;
	int age;
public:
	Person(const char *str, int num) : age(num)
	{
		int len = strlen(str)+1;
		name = new char[len];
		strcpy(name, str);
	}
	~Person()
	{
		delete []name;
		cout<<"Destructor call"<<endl;
	}
	void ShowPersonInfo()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age  : "<<age<<endl;
	}
};

int main(void)
{
	Person man1("Lee youngsuk", 27);
	Person man2("Lee hyorin", 25);
	
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
