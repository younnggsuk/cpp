#include "AccountHandler.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using namespace ACCOUNT_HANDLER_CONST;

AccountHandler::AccountHandler() : accCount(0)
{ }

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
	int select;

	cout<<"[Create account]"<<endl;
	cout<<"1. NormalAccount  2. CreditAccount"<<endl;
	cout<<"Select: ";
	cin>>select;

	switch(select)
	{
		case NORMAL:
			CreateNormalAccount();
			break;
		case CREDIT:
			CreateCreditAccount();
			break;
		default:
			cout<<"[Account selection error]"<<endl;
			cout<<"[Please try again]"<<endl<<endl;
			return;
	}
}

void AccountHandler::CreateNormalAccount()
{
	int accID;
	char name[MAX_NAME];
	int balance;
	int rate;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Name : ";
	cin>>name;
	cout<<"Deposit amount : ";
	cin>>balance;
	cout<<"Rate : ";
	cin>>rate;

	accArr[accCount++] = new NormalAccount(accID, name, balance, rate);
	cout<<"[Creation completed]"<<endl<<endl;
}

void AccountHandler::CreateCreditAccount()
{
	int accID;
	char name[MAX_NAME];
	int balance;
	int rate;
	int credit;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Name : ";
	cin>>name;
	cout<<"Deposit amount : ";
	cin>>balance;
	cout<<"Rate : ";
	cin>>rate;
	cout<<"Credit(1toA, 2toB, 3toC) : ";
	cin>>credit;
	if(1 <= credit || credit <= 3)
	{
		switch(credit)
		{
			case A:
				accArr[accCount++] = new HighCreditAccount(accID, name, balance, rate, HIGH_CREDIT_ACCOUNT_CONST::A);
				break;
			case B:
				accArr[accCount++] = new HighCreditAccount(accID, name, balance, rate, HIGH_CREDIT_ACCOUNT_CONST::B);
				break;
			case C:
				accArr[accCount++] = new HighCreditAccount(accID, name, balance, rate, HIGH_CREDIT_ACCOUNT_CONST::C);
				break;
		}

		cout<<"[Creation completed]"<<endl<<endl;
		return;
	}

	cout<<"[Credit selection error]"<<endl;
	cout<<"[Please try again]"<<endl<<endl;
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

