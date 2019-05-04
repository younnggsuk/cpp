#include "BankingSystemFunc.h"

int main(void)
{
	int select;

	int countAcc = 0;
	Account accInfo[NUM_ACCOUNT];

	while(1)
	{
		PrintMenu();
		cout<<"Select : ";
		cin>>select;

		switch(select)
		{
			case CREATE :
				CreateAccount(accInfo, &countAcc);
				break;
			
			case DEPOSIT :
				DepositMoney(accInfo, &countAcc);
				break;

			case WITHDRAW :
				WithdrawMoney(accInfo, &countAcc);
				break;

			case PRINT : 
				PrintAll(accInfo, countAcc);
				break;

			case EXIT :
				cout<<"[Exit Program]"<<endl;
				return 0;

			default :
				cout<<"[Selection error]"<<endl;
				cout<<"[Please try again]"<<endl<<endl;
				break;
		}
	}

	return 0;
}