#include "AccountClass.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

Account::Account(int _accID, char *_name, int _balance)
		: accID(_accID), balance(_balance)
{
	name = new char[strlen(_name)+1];
	strcpy(name, _name);
}
int Account::GetID()
{
	return accID;
}
int Account::GetBalance()
{
	return balance;
}
void Account::Deposit(int money)
{
	balance += money;
}
bool Account::Withdraw(int money)
{
	if(money > balance)
		return true;

	balance -= money;
	return false;
}
void Account::ShowAccountInfo() const
{
	cout<<"Account ID : "<<accID<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Balance : "<<balance<<endl;
}
Account::~Account()
{
	delete []name;
}
