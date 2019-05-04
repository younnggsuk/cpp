#include <iostream>

using std::cout;
using std::endl;

typedef struct Data
{
	int data;
	void (*ShowData)(Data*);
	void (*Add)(Data*, int);
} _data;

void Show(Data *p)
{
	cout<<"Data : "<<p->data<<endl;
}

void Add(Data *p, int num)
{
	p->data += num;
}

int main()
{
	Data obj1 = {17, Show, Add};
	Data obj2 = {9,  Show, Add};

	obj1.Add(&obj1, 15);
	obj2.Add(&obj2, 7);

	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);

	return 0;
}

