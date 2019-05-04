#ifndef __HIGH_CREDIT_ACCOUNT_CLASS_H__
#define __HIGH_CREDIT_ACCOUNT_CLASS_H__

#include "NormalAccountClass.h"

namespace HIGH_CREDIT_ACCOUNT_CONST
{
	enum { A=7, B=4, C=2 };
};

class HighCreditAccount : public NormalAccount
{
private:
	int credit;
public:
	HighCreditAccount(int _accID, String _name, int _balance, int _rate, int _credit);
	HighCreditAccount(const HighCreditAccount &copy);
	HighCreditAccount& operator=(const HighCreditAccount &ref);
	virtual int GetInterest(int money) const;
	virtual void Deposit(int money);
	virtual void ShowAccountInfo() const;
};

#endif
