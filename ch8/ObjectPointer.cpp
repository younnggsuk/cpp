#include <iostream>

using std::cout;
using std::endl;

class Person
{
public:
	void Sleep() { cout<<"Sleep"<<endl; }
};

class Student : public Person
{
public:
	void Study() { cout<<"Study"<<endl; }
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout<<"Work"<<endl; }
};

int main()
{
	Person *p1 = new Student();
	Person *p2 = new PartTimeStudent();
	Student *p3 = new PartTimeStudent();

	p1->Sleep();
	p2->Sleep();
	p3->Study();

	delete p1;
	delete p2;
	delete p3;

	return 0;
}
