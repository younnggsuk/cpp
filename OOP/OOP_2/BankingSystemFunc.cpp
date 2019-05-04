#include "BankingSystemFunc.h"

void PrintMenu()
{
	cout<<"-----MENU-----"<<endl;
	cout<<"1. Create account"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw"<<endl;
	cout<<"4. Print all account's info"<<endl;
	cout<<"5. Exit program"<<endl;
}

void CreateAccount(Account *accArr[], int *accCount)
{
	int accID;
	char name[MAX_NAME];
	int balance;

	cout<<"[Create account]"<<endl;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Name : ";
	cin>>name;
	cout<<"Deposit amount : ";
	cin>>balance;

	accArr[(*accCount)++] = new Account(accID, name, balance);

	cout<<"[Creation completed]"<<endl<<endl;
}

void DepositMoney(Account *accArr[], int *accCount)
{
	int accID, amount;
	int index;

	cout<<"[Deposit]"<<endl;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Deposit amount : ";
	cin>>amount;

	index = SearchAccount(accArr, accCount, accID);
	if(index < 0)
	{
		cout<<"[Can't find that account]"<<endl;
		return;
	}

	accArr[index]->Deposit(amount);

	cout<<"[Deposit completed]"<<endl<<endl;
}

void WithdrawMoney(Account *accArr[], int *accCount)
{
	int accID, amount;
	int index;

	cout<<"[Withdraw]"<<endl;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Withdraw amount : ";
	cin>>amount;

	index = SearchAccount(accArr, accCount, accID);
	if(index < 0)
	{
		cout<<"[Can't find that account]"<<endl;
		return;
	}

	if(accArr[index]->Withdraw(amount))
	{
		cout<<"[Balance is not enough]"<<endl<<endl;
		return;
	}
	
	cout<<"[Withdrawal completed]"<<endl<<endl;
}

void PrintAll(Account *accArr[], int accCount)
{
	cout<<"[Print all account's info]"<<endl;
	for(int i=0; i<accCount; i++)
	{
		accArr[i]->ShowAccountInfo();
	}
	cout<<"[Print completed]"<<endl<<endl;
}

int SearchAccount(Account *accArr[], int *accCount, int searchID)
{
	for(int index=0; index<*accCount; index++)
	{
		if(accArr[index]->GetID() == searchID)
			return index;
	}

	return -1;
}
