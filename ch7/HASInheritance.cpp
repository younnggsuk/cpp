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
		cout<<"BBANG"<<endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;
public:
	Police(int bNum, int nCuffs) : Gun(bNum), handcuffs(nCuffs) {}
	void PutHandcuffs()
	{
		cout<<"SNMP"<<endl;
		handcuffs--;
	}
};

int main()
{
	Police pMan(5, 3);
	pMan.Shot();
	pMan.PutHandcuffs();

	return 0;
}
