#include "AccountHandler.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

AccountHandler::~AccountHandler()
{
	for(int i=0; i<accCount; i++)
		delete accArr[i];
}

void AccountHandler::PrintMenu() const
{
	cout<<"-----MENU-----"<<endl;
	cout<<"1. Create account"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw"<<endl;
	cout<<"4. Print all account's info"<<endl;
	cout<<"5. Exit program"<<endl;
}

void AccountHandler::CreateAccount()
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

	accArr[accCount++] = new Account(accID, name, balance);

	cout<<"[Creation completed]"<<endl<<endl;
}

void AccountHandler::DepositMoney() const
{
	int accID, amount;
	int index;

	cout<<"[Deposit]"<<endl;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Deposit amount : ";
	cin>>amount;

	index = SearchAccount(accID);
	if(index == -1)
	{
		cout<<"[Can't find that account]"<<endl;
		return;
	}

	accArr[index]->Deposit(amount);

	cout<<"[Deposit completed]"<<endl<<endl;
}

void AccountHandler::WithdrawMoney() const
{
	int accID, amount;
	int index;

	cout<<"[Withdraw]"<<endl;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Withdraw amount : ";
	cin>>amount;

	index = SearchAccount(accID);
	if(index == -1)
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

void AccountHandler::PrintAll() const
{
	cout<<"[Print all account's info]"<<endl;
	cout<<accCount<<endl;
	for(int i=0; i<accCount; i++)
	{
		accArr[i]->ShowAccountInfo();
	}
	cout<<"[Print completed]"<<endl<<endl;
}

int AccountHandler::SearchAccount(int searchID) const
{
	for(int index=0; index<accCount; index++)
	{
		if(accArr[index]->GetID() == searchID)
			return index;
	}

	return -1;
}

