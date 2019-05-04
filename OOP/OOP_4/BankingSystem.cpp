#include "BankingSystemFunc.h"

int main(void)
{
	int select;

	Account *accArr[NUM_ACCOUNT];

	while(true)
	{
		PrintMenu();
		cout<<"Select : ";
		cin>>select;

		switch(select)
		{
			case ACCOUNT_CONST::CREATE :
				CreateAccount(accArr);
				break;
			
			case ACCOUNT_CONST::DEPOSIT :
				DepositMoney(accArr);
				break;

			case ACCOUNT_CONST::WITHDRAW :
				WithdrawMoney(accArr);
				break;

			case ACCOUNT_CONST::PRINT : 
				PrintAll(accArr);
				break;

			case ACCOUNT_CONST::EXIT :
				cout<<"[Exit Program]"<<endl;
				return 0;

			default :
				cout<<"[Selection error]"<<endl;
				cout<<"[Please try again]"<<endl<<endl;
				break;
		}
	}

	for(int i=0; i<Account::accCount; i++)
		delete accArr[i];

	return 0;
}
