#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Girl;

class Boy
{
private:
	int height;
	friend class Girl;
public:
	Boy(int h) : height(h) {}
	void ShowYourFriend(const Girl &frn) const;
};

class Girl
{
private:
	char phNum[100];
public:
	friend class Boy;
	Girl(const char *num)
	{
		strcpy(phNum, num);
	}
	void ShowYourFriend(const Boy &frn) const;
};

void Boy::ShowYourFriend(const Girl &frn) const
{
	cout<<"Her phone num : "<<frn.phNum<<endl;
}
void Girl::ShowYourFriend(const Boy &frn) const
{
	cout<<"Her height : "<<frn.height<<endl;
}

int main(void)
{
	Boy boy(173);
	Girl girl("010-5273-4239");

	boy.ShowYourFriend(girl);
	girl.ShowYourFriend(boy);

	return 0;
}
