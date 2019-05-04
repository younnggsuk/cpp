#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "AccountClass.h"

const int NUM_ACCOUNT = 100;
const int MAX_NAME = 255;

class AccountHandler
{
private:
	int accCount;
	Account *accArr[NUM_ACCOUNT];
public:
	enum {CREATE=1, DEPOSIT, WITHDRAW,	PRINT, EXIT};
public:
	AccountHandler() : accCount(0) {}
	~AccountHandler();
	void PrintMenu() const;
	void CreateAccount();
	void DepositMoney() const;
	void WithdrawMoney() const;
	void PrintAll() const;
	int SearchAccount(int searchID) const;
};

#endif
