#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Simple
{
private:
	int num;
public:
	Simple(int n) : num(n) {}
	Simple(const Simple &copy) : num(copy.num) {}
	Simple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout<<"num : "<<num<<endl;
	}
};

int main(void)
{
	const Simple obj(7);
	obj.ShowData();
//	obj.AddNum(100);

	return 0;
}
