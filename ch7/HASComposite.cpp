#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Gun
{
private:
	int bullet;
public:
	Gun(int bNum) : bullet(bNum) {}
	void Shot()
	{
		cout<<"BBANG!!"<<endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;
	Gun *pistol;
public:
	Police(int bNum, int nCuffs) : handcuffs(nCuffs)
	{
		if(bNum > 0)
			pistol = new Gun(bNum);
		else
			pistol = NULL;
	}
	void PutHandcuff()
	{
		cout<<"SNAP!!"<<endl;
		handcuffs--;
	}
	void Shot()
	{
		if(pistol != NULL)
		{
			pistol->Shot();
		}
		else
		{
			cout<<"HUT BBANG!!"<<endl;
		}
	}
	~Police()
	{
		if(pistol != NULL)
			delete pistol;
	}
};

int main()
{
	Police man1(5, 3);
	Police man2(0, 3);

	man1.Shot();
	man1.PutHandcuff();

	man2.Shot();
	man2.PutHandcuff();

	return 0;
}
