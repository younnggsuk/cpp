#ifndef __ACCOUNT_CLASS_H__
#define __ACCOUNT_CLASS_H__

class Account
{
private:
	int accID;
	char *name;
	int balance;
public:
	Account(int _accID, char *_name, int _balance);
	int GetID();
	int GetBalance();
	void Deposit(int money);
	bool Withdraw(int money);
	void ShowAccountInfo() const;
	~Account();
};

#endif
