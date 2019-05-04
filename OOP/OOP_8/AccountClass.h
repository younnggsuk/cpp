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
	Account(const Account &copy);
	Account& operator=(const Account &ref);
	int GetID() const;
	int GetBalance() const;
	virtual void Deposit(int money);
	virtual void ShowAccountInfo() const;
	bool Withdraw(int money);
	virtual ~Account();
};

#endif
