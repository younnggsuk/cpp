#include <iostream>

using std::cout;
using std::endl;

class Data
{
private:
	int data;
public:
	Data(int num) : data(num) {}
	void ShowData()
	{
		cout<<"Data : "<<data<<endl;
	}
	void AddNum(int num)
	{
		data += num;
	}
};

int main()
{
	Data obj(15);
	obj.AddNum(17);
	obj.ShowData();

	return 0;
}
