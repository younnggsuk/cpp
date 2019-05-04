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

void CreateAccount(Account accInfo[], int *countAcc)
{
	char buf[MAX_NAME];

	cout<<"[Create account]"<<endl;
	
	cout<<"Account ID : ";
	cin>>accInfo[*countAcc].accID;
	
	cout<<"Name : ";
	cin>>buf;
	accInfo[*countAcc].name = (char*)malloc(sizeof(char)*(strlen(buf)+1));
	strcpy(accInfo[*countAcc].name, buf);
	accInfo[*countAcc].name[strlen(buf)] = '\0';

	cout<<"Deposit amount : ";
	cin>>accInfo[*countAcc].balance;
	
	*countAcc += 1;
	cout<<"[Creation completed]"<<endl<<endl;
}

void DepositMoney(Account accInfo[], int *countAcc)
{
	int accID, amount;
	int index;

	cout<<"[Deposit]"<<endl;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Deposit amount : ";
	cin>>amount;

	index = SearchAccount(accInfo, countAcc, accID);
	if(index < 0)
	{
		cout<<"[Can't find that account]"<<endl;
		return;
	}

	accInfo[index].balance += amount;

	cout<<"[Deposit completed]"<<endl<<endl;
}

void WithdrawMoney(Account accInfo[], int *countAcc)
{
	int accID, amount;
	int index;

	cout<<"[Withdraw]"<<endl;

	cout<<"Account ID : ";
	cin>>accID;
	cout<<"Withdraw amount : ";
	cin>>amount;

	index = SearchAccount(accInfo, countAcc, accID);
	if(index < 0)
	{
		cout<<"[Can't find that account]"<<endl;
		return;
	}

	if(accInfo[index].balance < amount)
	{
		cout<<"[Balance is not enough]"<<endl<<endl;
		return;
	}
	
	accInfo[index].balance -= amount;

	cout<<"[Withdrawal completed]"<<endl<<endl;
}

void PrintAll(Account accInfo[], int countAcc)
{
	cout<<"[Print all account's info]"<<endl;
	for(int i=0; i<countAcc; i++)
	{
		cout<<"Account ID : "<<accInfo[i].accID<<endl;
		cout<<"Name : "<<accInfo[i].name<<endl;
		cout<<"Balance : "<<accInfo[i].balance<<endl;
	}
	cout<<"[Print completed]"<<endl<<endl;
}

int SearchAccount(Account accInfo[], int *countAcc, int searchID)
{
	for(int index=0; index<*countAcc; index++)
	{
		if(accInfo[index].accID == searchID)
			return index;
	}

	return -1;
}
