#ifndef __ACCOUNT_CLASS_H__
#define __ACCOUNT_CLASS_H__

#include "StringClass.h"

class Account
{
private:
	int accID;
	String name;
	int balance;
public:
	Account(int _accID, String _name, int _balance);
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
