#ifndef __BANKING_SYSTEM_FUNC_H__
#define __BANKING_SYSTEM_FUNC_H__

#include <iostream>
#include <cstring>
#include "AccountClass.h"

using std::cout;
using std::cin;
using std::endl;

const int NUM_ACCOUNT = 100;
const int MAX_NAME = 255;

namespace ACCOUNT_CONST
{
	enum 
	{
		CREATE=1,
		DEPOSIT,
		WITHDRAW,
		PRINT,
		EXIT
	};
}

void PrintMenu();
void CreateAccount(Account *accArr[]);
void DepositMoney(Account *accArr[]);
void WithdrawMoney(Account *accArr[]);
void PrintAll(Account *accArr[]);
int SearchAccount(Account *accArr[], int searchID);

#endif
