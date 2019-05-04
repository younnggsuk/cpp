#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n) {cout<<"create"<<endl;}
	~Temporary() {cout<<"destroy"<<endl;}
	void ShowData() {cout<<"num : "<<num<<endl;}
};

int main(void)
{
	Temporary(100);
	cout<<"after make"<<endl<<endl;

	Temporary(200).ShowData();
	cout<<"after make"<<endl<<endl;

	const Temporary &cRef = Temporary(300);
	cout<<"end of main"<<endl;

	return 0;
}
