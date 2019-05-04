#include "HighCreditAccountClass.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

HighCreditAccount::HighCreditAccount(int _accID, char *_name, int _balance, int _rate, int _credit)
	: NormalAccount(_accID, _name, _balance, _rate), credit(_credit)
{ }
HighCreditAccount::HighCreditAccount(const HighCreditAccount &copy)
	: NormalAccount(copy), credit(copy.credit)
{ }
HighCreditAccount& HighCreditAccount::operator=(const HighCreditAccount &ref)
{
	NormalAccount::operator=(ref);
	credit = ref.credit;
	return *this;
}
int HighCreditAccount::GetInterest(int money) const
{
	return ( NormalAccount::GetInterest(money) + (int)( money * (credit/100.0)) );
}
void HighCreditAccount::Deposit(int money)
{
	Account::Deposit( money + GetInterest(money) );
}
void HighCreditAccount::ShowAccountInfo() const
{
	NormalAccount::ShowAccountInfo();
	cout<<"Credit : ";
	switch(credit)
	{
		case HIGH_CREDIT_ACCOUNT_CONST::A:
			cout<<'A'<<endl;
			break;
		case HIGH_CREDIT_ACCOUNT_CONST::B:
			cout<<'B'<<endl;
			break;
		case HIGH_CREDIT_ACCOUNT_CONST::C:
			cout<<'C'<<endl;
			break;
	}	
}
