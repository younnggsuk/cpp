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
void CreateAccount(Account *accArr[], int *accCount);
void DepositMoney(Account *accArr[], int *accCount);
void WithdrawMoney(Account *accArr[], int *accCount);
void PrintAll(Account *accArr[], int accCount);
int SearchAccount(Account *accArr[], int *accCount, int searchID);

#endif
