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
	Police(const Police& ref) : handcuffs(ref.handcuffs)
	{
		if(ref.pistol != NULL)
			pistol = new Gun(*(ref.pistol));
		else
			pistol = NULL;
	}
	Police& operator=(const Police& ref)
	{
		if(pistol != NULL)
			delete pistol;

		if(ref.pistol != NULL)
			pistol = new Gun(*(ref.pistol));
		else
			pistol = NULL;

		handcuffs = ref.handcuffs;
		return *this;
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
	Police man2 = man1;

	man2.Shot();
	man2.PutHandcuff();

	Police man3(0, 0);
	man3 = man1;
	man3.Shot();
	man3.PutHandcuff();

	return 0;
}
