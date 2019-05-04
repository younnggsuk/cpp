#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "AccountClass.h"
#include "NormalAccountClass.h"
#include "HighCreditAccountClass.h"
#include "BoundCheckArray.h"

const int NUM_ACCOUNT = 100;
const int MAX_NAME = 255;

namespace ACCOUNT_HANDLER_CONST
{
	enum
	{
		NORMAL=1,
		CREDIT
	};
	enum
	{
		A = 1,
		B = 2,
		C = 3
	};
};

class AccountHandler
{
private:
	int accCount;
	BoundCheckArray<Account*> accArr;
public:
	AccountHandler();
	~AccountHandler();
	void PrintMenu() const;
	void CreateAccount();
	void CreateNormalAccount();
	void CreateCreditAccount();
	void DepositMoney() const;
	void WithdrawMoney() const;
	void PrintAll() const;
	int SearchAccount(int searchID) const;
};

#endif
