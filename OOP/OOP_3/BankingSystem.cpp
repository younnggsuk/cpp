#include "BankingSystemFunc.h"

int main(void)
{
	int select;

	int accCount = 0;
	Account *accArr[NUM_ACCOUNT];

	while(true)
	{
		PrintMenu();
		cout<<"Select : ";
		cin>>select;

		switch(select)
		{
			case ACCOUNT_CONST::CREATE :
				CreateAccount(accArr, &accCount);
				break;
			
			case ACCOUNT_CONST::DEPOSIT :
				DepositMoney(accArr, &accCount);
				break;

			case ACCOUNT_CONST::WITHDRAW :
				WithdrawMoney(accArr, &accCount);
				break;

			case ACCOUNT_CONST::PRINT : 
				PrintAll(accArr, accCount);
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

	for(int i=0; i<accCount; i++)
		delete accArr[i];

	return 0;
}
