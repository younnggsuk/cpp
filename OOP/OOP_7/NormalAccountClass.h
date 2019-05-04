#ifndef __NORMAL_ACCOUNT_CLASS_H__
#define __NORMAL_ACCOUNT_CLASS_H__

#include "AccountClass.h"

class NormalAccount : public Account
{
private:
	int rate;
public:
	NormalAccount(int _accID, char *_name, int _balance, int _rate);
	NormalAccount(const NormalAccount &copy);
	virtual int GetInterest(int money) const;
	virtual void Deposit(int money);
	virtual void ShowAccountInfo() const;
};

#endif
