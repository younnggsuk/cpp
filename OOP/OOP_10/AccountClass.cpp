#include "AccountClass.h"

#include <iostream>
#include <cstring>

using namespace std;

Account::Account(int _accID, String _name, int _balance)
		: accID(_accID), name(_name), balance(_balance)
{}
Account::Account(const Account &copy)
		: accID(copy.accID), name(copy.name), balance(copy.balance)
{}
Account& Account::operator=(const Account &ref)
{
	accID = ref.accID;
	balance = ref.balance;
	name = ref.name;
	return *this;
}
int Account::GetID() const
{
	return accID;
}
void Account::Deposit(int money)
{
	balance += money;
}
void Account::ShowAccountInfo() const
{
	cout<<"Account ID : "<<accID<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Balance : "<<balance<<endl;
}
int Account::GetBalance() const
{
	return balance;
}
bool Account::Withdraw(int money)
{
	if(money > balance)
		return true;

	balance -= money;
	return false;
}
Account::~Account()
{}
