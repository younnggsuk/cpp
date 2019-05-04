#include "NormalAccountClass.h"

#include <iostream>
#include <cstring>

using namespace std;

NormalAccount::NormalAccount(int _accID, String _name, int _balance, int _rate)
	: Account(_accID, _name, _balance), rate(_rate) 
{ }
NormalAccount::NormalAccount(const NormalAccount &copy)
	: Account(copy), rate(copy.rate)
{ }
NormalAccount& NormalAccount::operator=(const NormalAccount &ref)
{
	Account::operator=(ref);
	rate = ref.rate;
	return *this;
}
int NormalAccount::GetInterest(int money) const
{
	return (int)( money * (rate/100.0) );
}
void NormalAccount::Deposit(int money)
{
	Account::Deposit( money + GetInterest(money) );
}
void NormalAccount::ShowAccountInfo() const
{
	Account::ShowAccountInfo();
	cout<<"Rate : "<<rate<<endl;
}
