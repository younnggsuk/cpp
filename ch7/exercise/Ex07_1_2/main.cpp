#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class MyFriendInfo
{
private:
	char *name;
	int age;
public:
	MyFriendInfo(const char *_name, int _age) : age(_age)
	{
		name = new char[strlen(_name)+1];
		strcpy(name, _name);
	}
	~MyFriendInfo()
	{
		delete []name;
	}
	void ShowMyFriendInfo() const
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char *addr;
	char *phone;
public:
	MyFriendDetailInfo(const char *_name, int _age,
					   const char *_addr, const char *_phone)
		: MyFriendInfo(_name, _age)
	{
		addr = new char[strlen(_addr)+1];
		phone = new char[strlen(_phone)+1];
		
		strcpy(addr, _addr);
		strcpy(phone, _phone);
	}
	~MyFriendDetailInfo()
	{
		delete []addr;
		delete []phone;
	}
	void ShowMyFriendDetailInfo() const
	{
		ShowMyFriendInfo();
		cout<<"Addr : "<<addr<<endl;
		cout<<"Phone : "<<phone<<endl;
	}
};

int main(void)
{

	MyFriendDetailInfo frnd("Lee", 20, "Busan", "010-1111-2222");

	frnd.ShowMyFriendDetailInfo();

	return 0;
}

