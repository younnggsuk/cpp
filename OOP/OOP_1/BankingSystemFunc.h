#ifndef __BANKING_SYSTEM_FUNC_H__
#define __BANKING_SYSTEM_FUNC_H__

#include <iostream>
#include <cstring>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

const int NUM_ACCOUNT = 100;
const int MAX_NAME = 255;

enum {CREATE=1, DEPOSIT, WITHDRAW, PRINT, EXIT};

typedef struct _Account{
	int accID;
	char *name;
	int balance;
} Account;

int SearchAccount(Account accInfo[], int *countAcc, int searchID);

void PrintMenu();
void CreateAccount(Account accInfo[], int *countAcc);
void DepositMoney(Account accInfo[], int *countAcc);
void WithdrawMoney(Account accInfo[], int *countAcc);
void PrintAll(Account accInfo[], int countAcc);

#endif
