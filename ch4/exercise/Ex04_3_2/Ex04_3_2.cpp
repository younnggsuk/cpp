#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

namespace COMP_POS
{
	enum POSITION{ CLERK, SENIOR, ASSIST, MANAGER };
	void ShowPosition(int position)
	{
		switch(position)
		{
			case CLERK:
				cout<<"CLERK"<<endl;
				break;
			case SENIOR:
				cout<<"SENIOR"<<endl;
				break;
			case ASSIST:
				cout<<"ASSIST"<<endl;
				break;
			case MANAGER:
				cout<<"MANAGER"<<endl;
				break;
		}
		cout<<endl;
	}
}

class NameCard
{
private:
	char *name;
	char *company;
	char *phoneNum;
	int position;
public:
	NameCard(const char *_name, const char *_company,
			 const char *_phone, int pos) : position(pos)
	{
		name = new char[strlen(_name)+1];
		company = new char[strlen(_company)+1];
		phoneNum = new char[strlen(_phone)+1];
	
		strcpy(name, _name);
		strcpy(company, _company);
		strcpy(phoneNum, _phone);
	}
	~NameCard()
	{
		delete []name;
		delete []company;
		delete []phoneNum;
	}
	void ShowNameCardInfo()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Company : "<<company<<endl;
		cout<<"Phone : "<<phoneNum<<endl;
		cout<<"Position : ";
		COMP_POS::ShowPosition(position);
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}
